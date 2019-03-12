/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Clock.cpp
*/

#include "Clock.hpp"

namespace nts {
    Clock::Clock(const std::string &name) : ComponentContainer(name, "Clock")
    {
        ComponentPin *pin1 = new ComponentPin(this, pinType::INPUT, Tristate::UNDEFINED, 1);
        this->_nbPins = 1;
        this->_pins.push_back(pin1);
    }

    Clock::~Clock()
    {
    }
}