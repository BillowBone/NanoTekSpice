/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Input.cpp
*/

#include "Input.hpp"

namespace nts {
    Input::Input(const std::string &name) : ComponentContainer(name, "Input")
    {
        ComponentPin *pin1 = new ComponentPin(this, pinType::INPUT, Tristate::UNDEFINED, 1);
        this->_nbPins = 1;
        this->_pins.push_back(pin1);
    }

    Input::~Input()
    {
    }
}