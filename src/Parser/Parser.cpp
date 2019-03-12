/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Parser.cpp
*/

#include "Parser.hpp"

namespace nts {
    Parser::Parser(int argc, char *argv[])
    {
        if (argc > 1) {
            this->readFile(argv[1]);
            this->readArgs(argv);
            Circuit circuit(this->_chipsets, this->_links, this->_args);
        } else
            throw NoArgsError("Bad argument(s).", "Parser");
    }

    Parser::~Parser()
    {
    }

    void Parser::readFile(char *file)
    {
        bool chipsets = false;
        bool links = false;
        int mode = 0;
        std::ifstream config(file);
        std::vector<std::string> vChipsets;
        std::vector<std::string> vLinks;

        if (std::strcmp(file+std::strlen(file)-4, ".nts") != 0)
            throw InvalidExtensionError("Invalid extension file", "Parser");
        if (!config)
            throw NonExistingFileError("The file doesn't exists.", "Parser");
        for (std::string line; std::getline(config, line);) {
            if (line[0] == '#' || line == "") {
                continue;
            } else if (std::strncmp(line.c_str(), ".chipsets:", 10) == 0) {
                chipsets = true;
                mode++;
                continue;
            } else if (std::strncmp(line.c_str(), ".links:", 7) == 0 && mode == 1) {
                links = true;
                mode++;
                continue;
            } else if (mode == 1) {
                vChipsets.push_back(line);
            } else if (mode == 2) {
                vLinks.push_back(line);
            }
        }
        if (!chipsets)
            throw NoChipError("No Chipset section.", "Parser");
        if (!links)
            throw NoLinksError("No Links section.", "Parser");
        for (int i = 0; i < vChipsets.size(); i++) {
            this->_chipsets.push_back(this->splitChar(vChipsets[i], ' '));
        }
        for (int j = 0; j < vLinks.size(); j++) {
            this->_links.push_back(this->splitChar(vLinks[j], ' '));
        }
    }

    void Parser::readArgs(char *argv[])
    {
        for (int k = 2; argv[k] != NULL; k++) {
            this->_args.push_back(argv[k]);
        }
    }

    std::vector<std::string> Parser::splitChar(const std::string &input, char split)
    {
        std::stringstream buffer(input);
        std::vector<std::string> ret;
        std::string line;
        std::string backup = input;
        bool comment = false;

        while (std::getline(buffer, line, split)) {
            if (line != "" && line[0] != '#' && !comment)
                ret.push_back(line);
            if (line[0] == '#')
                comment = true;
        }
        if (split == ' ' && ret.size() == 1)
            ret.clear();
        if (split == ' ' && ret.size() == 0) {
            std::stringstream buffTabs(backup);
            split = '\t';
            while (std::getline(buffTabs, line, split)) {
                if (line != "" && line[0] != '#' && !comment)
                    ret.push_back(line);
                if (line[0] == '#')
                    comment = true;
            }
        }
        if (ret.size() != 2)
            throw InpValError("Invalid input value(s).", "Parser");
        return (ret);
    }

    std::string Parser::getComponentName(std::string link)
    {
        std::vector<std::string> vect = splitChar(link, ':');

        return (vect[0]);
    }

    int Parser::getIndexPin(IComponent &component, std::string link)
    {
        std::vector<std::string> vect = splitChar(link, ':');
        int index = std::atoi(vect[1].c_str());
        if (component.getPin(index) != nullptr)
            return (index);
        else
            throw PinExistError("This PIN doesn't exist", "Parser");
    }

    std::string Parser::getInputInfos(std::string value, int opt)
    {
        std::vector<std::string> vect = splitChar(value, '=');

        if (opt == 1)
            return (vect[0]);
        else
            return (vect[1]);
    }
}
