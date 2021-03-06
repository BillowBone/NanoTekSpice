/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4094.cpp
*/

#include "Component4094.hpp"

namespace nts {
    Component4094::Component4094(const std::string &name) : ComponentContainer(name, "4094")
    {
        ComponentPin *pin1 = new ComponentPin(this, pinType::INPUT, Tristate::UNDEFINED, 1);
        ComponentPin *pin2 = new ComponentPin(this, pinType::INPUT, Tristate::UNDEFINED, 2);
        ComponentPin *pin3 = new ComponentPin(this, pinType::INPUT, Tristate::UNDEFINED, 3);
        ComponentPin *pin4 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 4);
        ComponentPin *pin5 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 5);
        ComponentPin *pin6 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 6);
        ComponentPin *pin7 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 7);
        ComponentPin *pin8 = new ComponentPin(this, pinType::OTHER, Tristate::UNDEFINED, 8);
        ComponentPin *pin9 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 9);
        ComponentPin *pin10 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 10);
        ComponentPin *pin11 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 11);
        ComponentPin *pin12 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 12);
        ComponentPin *pin13 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 13);
        ComponentPin *pin14 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 14);
        ComponentPin *pin15 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 15);
        ComponentPin *pin16 = new ComponentPin(this, pinType::OTHER, Tristate::UNDEFINED, 16);
        this->_nbPins = 16;
        this->_pins.reserve(16);
        this->_pins.push_back(pin1);
        this->_pins.push_back(pin2);
        this->_pins.push_back(pin3);
        this->_pins.push_back(pin4);
        this->_pins.push_back(pin5);
        this->_pins.push_back(pin6);
        this->_pins.push_back(pin7);
        this->_pins.push_back(pin8);
        this->_pins.push_back(pin9);
        this->_pins.push_back(pin10);
        this->_pins.push_back(pin11);
        this->_pins.push_back(pin12);
        this->_pins.push_back(pin13);
        this->_pins.push_back(pin14);
        this->_pins.push_back(pin15);
        this->_pins.push_back(pin16);
    }

    Component4094::~Component4094()
    {
    }
}