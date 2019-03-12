/*
** EPITECH PROJECT, 2019
** OOP - nanotekspice
** File description:
** UserInterface
*/

#include "UserInterface.hpp"

namespace nts {
    UserInterface::UserInterface() : prompt(PROMPT), cmd("")
    {

    }
    
    UserInterface::~UserInterface()
    {

    }

    void UserInterface::setCmd(const std::string &nwCmd)
    {
        cmd = nwCmd;
    }

    void UserInterface::displayPrompt()
    {
        std::string nwCmd;

        std::cout << prompt;
        std::cin >> nwCmd;
        setCmd(nwCmd);
    }

    int UserInterface::parseCmd(Circuit *circuit)
    {
        if (cmd == "exit" || cmd == "")
            exit(0);
        else if (cmd == "dump")
            circuit->dumpCircuit();
        else if (cmd == "display")
            circuit->display();
        else if (cmd == "simulate")
            circuit->simulate();
        for (int i = 0; i < cmd.size(); i++) {
            if (cmd[i] == '=')
                circuit->netInputRt(cmd);
        }
        return (0);
    }
}
