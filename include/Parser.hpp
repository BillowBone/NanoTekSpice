/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Parser.hpp
*/

#ifndef PARSER_HPP_
	#define PARSER_HPP_

#include "ComponentContainer.hpp"
#include "Circuit.hpp"

namespace nts {
    class Parser {
        public:
        Parser(int argc, char *argv[]);
            ~Parser();
            static std::string getComponentName(std::string link);
            static int getIndexPin(IComponent &component, std::string link);
            static std::string getInputInfos(std::string value, int opt);
        private:
            void readFile(char *file);
            void readArgs(char *argv[]);
            static std::vector<std::string> splitChar(const std::string &input, char split);
            std::vector<std::vector<std::string>> _chipsets;
            std::vector<std::vector<std::string>> _links;
            std::vector<std::string> _args;
    };
}

#endif /* !PARSER_HPP_ */
