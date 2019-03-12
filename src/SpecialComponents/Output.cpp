/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Output.cpp
*/

#include "Output.hpp"

namespace nts {
    Output::Output(const std::string &name) : ComponentContainer(name, "Output")
    {
        ComponentPin *pin1 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 1);
        this->_nbPins = 1;
        this->_pins.push_back(pin1);
    }

    Output::~Output()
    {
    }
}