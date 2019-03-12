/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Circuit.hpp
*/

#ifndef CIRCUIT_HPP_
	#define CIRCUIT_HPP_

#include "ComponentFactory.hpp"
#include "Parser.hpp"

namespace nts {
    class Circuit {
        public:
            Circuit(std::vector<std::vector<std::string>> chipsets, std::vector<std::vector<std::string>> links, std::vector<std::string> args);
            ~Circuit();
            int countInputs() const;
            int getComponentIdByName(std::string name) const;
            void callFactory(std::vector<std::vector<std::string>> chipsets);
            void applyLinks(std::vector<std::vector<std::string>> links);
            void processInputsValues(std::vector<std::string> args, int opt);
            void dumpCircuit() const;
            void netInputRt(std::string cmd);
            void simulate();
            void display();
            void reverseClocksValues();
        private:
            std::vector<std::unique_ptr<IComponent>> components;
    };
}

#endif /* !CIRCUIT_HPP_ */
