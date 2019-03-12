/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** ComponentContainer.cpp
*/

#include "ComponentContainer.hpp"

namespace nts {
    ComponentContainer::ComponentContainer(const std::string &name, const std::string &type)
    {
        this->_name = name;
        this->_type = type;
    }

    ComponentContainer::~ComponentContainer()
    {
    }

    Tristate ComponentContainer::compute(std::size_t pin)
    {
        return (Tristate::UNDEFINED);
    }

    ComponentPin *ComponentContainer::getPin(std::size_t pin) const
    {
        for (int i = 0; i < this->_pins.size(); i++) {
            if (this->_pins[i]->getId() == pin)
                return (this->_pins[i]);
        }
        return (nullptr);
    }

    int ComponentContainer::getNbPins() const
    {
        return (this->_nbPins);
    }

    void ComponentContainer::setLink(std::size_t pin, IComponent &other, std::size_t otherPin)
    {
        ComponentPin *myPin = this->getPin(pin);
        ComponentPin *myOtherPin = other.getPin(otherPin);
        this->_links.push_back(myPin);
        this->_links.push_back(myOtherPin);
    }

    void ComponentContainer::getLink(ComponentPin *pin)
    {
        for (int i = 0; i < this->_links.size(); i++) {
            if (this->_links[i] == pin) {
                this->_links[i]->setState(this->_links[i + 1]->getState());
            }
        }
    }

    int ComponentContainer::getNbLinks() const
    {
        return (this->_links.size() / 2);
    }

    void ComponentContainer::dump() const
    {
        std::cout << "Name: " << this->_name << std::endl;
        std::cout << "Component: " << this->_type << std::endl;
        std::cout << "Number of pin(s): " << this->_nbPins << std::endl;
        for (int i = 0; i < this->_nbPins; i++) {
            std::cout << "Pin " << this->_pins[i]->getId() << ":\tType ";
            switch (this->_pins[i]->getType()) {
                case INPUT:
                    std::cout << "{Input}";
                    break;
                case OUTPUT:
                    std::cout << "{Output}";
                    break;
                case OTHER:
                    std::cout << "{Other}";
                    break;
            }
            std::cout << "\tState ";
            switch (this->_pins[i]->getState()) {
                case UNDEFINED:
                    std::cout << "{Undefined}";
                    break;
                case FALSE:
                    std::cout << "{False}";
                    break;
                case TRUE:
                    std::cout << "{True}";
                    break;
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    std::string ComponentContainer::getName() const
    {
        return (this->_name);
    }

    std::string ComponentContainer::getType() const
    {
        return (this->_type);
    }
}