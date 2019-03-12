/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4071.cpp
*/

#include "Component4071.hpp"
#include "LogicGates.hpp"

namespace nts {
    Component4071::Component4071(const std::string &name) : ComponentContainer(name, "4071")
    {
        ComponentPin *pin1 = new ComponentPin(this, pinType::INPUT, Tristate::UNDEFINED, 1);
        ComponentPin *pin2 = new ComponentPin(this, pinType::INPUT, Tristate::UNDEFINED, 2);
        ComponentPin *pin3 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 3);
        ComponentPin *pin4 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 4);
        ComponentPin *pin5 = new ComponentPin(this, pinType::INPUT, Tristate::UNDEFINED, 5);
        ComponentPin *pin6 = new ComponentPin(this, pinType::INPUT, Tristate::UNDEFINED, 6);
        ComponentPin *pin7 = new ComponentPin(this, pinType::OTHER, Tristate::UNDEFINED, 7);
        ComponentPin *pin8 = new ComponentPin(this, pinType::INPUT, Tristate::UNDEFINED, 8);
        ComponentPin *pin9 = new ComponentPin(this, pinType::INPUT, Tristate::UNDEFINED, 9);
        ComponentPin *pin10 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 10);
        ComponentPin *pin11 = new ComponentPin(this, pinType::OUTPUT, Tristate::UNDEFINED, 11);
        ComponentPin *pin12 = new ComponentPin(this, pinType::INPUT, Tristate::UNDEFINED, 12);
        ComponentPin *pin13 = new ComponentPin(this, pinType::INPUT, Tristate::UNDEFINED, 13);
        ComponentPin *pin14 = new ComponentPin(this, pinType::OTHER, Tristate::UNDEFINED, 14);
        this->_nbPins = 14;
        this->_pins.reserve(14);
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
    }

    Component4071::~Component4071()
    {
    }

    Tristate Component4071::compute(std::size_t pin)
    {
        ComponentPin *in1 = this->getPin(1);
        ComponentPin *in2 = this->getPin(2);
        ComponentPin *out = this->getPin(3);

        this->getLink(in1);
        this->getLink(in2);
        out->setState(LogicGates::orGate(in1->getState(), in2->getState()));
        in1 = this->getPin(5);
        in2 = this->getPin(6);
        this->getLink(in1);
        this->getLink(in2);
        out = this->getPin(4);
        out->setState(LogicGates::orGate(in1->getState(), in2->getState()));
        in1 = this->getPin(12);
        in2 = this->getPin(13);
        this->getLink(in1);
        this->getLink(in2);
        out = this->getPin(11);
        out->setState(LogicGates::orGate(in1->getState(), in2->getState()));
        in1 = this->getPin(8);
        in2 = this->getPin(9);
        this->getLink(in1);
        this->getLink(in2);
        out = this->getPin(10);
        out->setState(LogicGates::orGate(in1->getState(), in2->getState()));
        out = this->getPin(pin);
        return (out->getState());
    }
}