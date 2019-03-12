/*
** EPITECH PROJECT, 2019
** OOP - nanotekspice
** File description:
** UserInterface.hpp
*/

#ifndef USERINTERFACE_HPP_
# define USERINTERFACE_HPP_

# define PROMPT "> "

# include <iostream>
# include <string>
# include "Circuit.hpp"

namespace nts {
    class UserInterface {
    public:
        UserInterface();
        ~UserInterface();
        void setCmd(const std::string &nwCmd);
        void displayPrompt();
        int parseCmd(Circuit *circuit);
    private:
        std::string prompt;
        std::string cmd;
    };
}
#endif /* !USERINTERFACE_HPP_ */
