/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** False.cpp
*/

#include "False.hpp"

namespace nts {
    False::False() : ComponentContainer("False", "False")
    {
        ComponentPin *pin1 = new ComponentPin(this, pinType::INPUT, Tristate::FALSE, 1);
        this->_nbPins = 1;
        this->_pins.push_back(pin1);
    }

    False::~False()
    {
    }
}