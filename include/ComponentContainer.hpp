/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** ComponentContainer.hpp
*/

#ifndef COMPONENTCONTAINER_HPP_
	#define COMPONENTCONTAINER_HPP_

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <memory>
#include <iomanip>
#include <string>
#include <cstring>
#include "Errors.hpp"
#include "ComponentPin.hpp"

namespace nts {
    class ComponentContainer : public IComponent {
    public:
        ComponentContainer(const std::string &name, const std::string &type);
        ~ComponentContainer();
        Tristate compute(std::size_t pin = 1);
        ComponentPin *getPin(std::size_t pin) const;
        int getNbPins() const;
        void setLink(std::size_t pin, IComponent &other, std::size_t otherPin);
        void getLink(ComponentPin *pin);
        int getNbLinks() const;
        void dump() const;
        std::string getName() const;
        std::string getType() const;
    protected:
        std::string _name;
        std::string _type;
        std::size_t _nbPins;
        std::vector<ComponentPin*> _pins;
        std::vector<ComponentPin*> _links;
    };
}

#endif /* !COMPONENTCONTAINER_HPP_ */
