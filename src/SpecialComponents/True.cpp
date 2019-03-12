/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** True.cpp
*/

#include "True.hpp"

namespace nts {
    True::True() : ComponentContainer("True", "True")
    {
        ComponentPin *pin1 = new ComponentPin(this, pinType::INPUT, Tristate::TRUE, 1);
        this->_nbPins = 1;
        this->_pins.push_back(pin1);
    }

    True::~True()
    {
    }
}