/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** IComponent.hpp
*/

#ifndef ICOMPONENT_HPP_
	#define ICOMPONENT_HPP_

#include <cstddef>
#include <ostream>

namespace nts {
    enum Tristate {
        UNDEFINED = (-true),
        TRUE = true,
        FALSE = false
    };
    class ComponentPin;
    class IComponent {
 	    public:
		    virtual ~IComponent() = default;
            virtual Tristate compute(std::size_t pin = 1) = 0;
            virtual ComponentPin *getPin(std::size_t pin) const = 0;
            virtual int getNbPins() const = 0;
            virtual void setLink(std::size_t pin, IComponent &other, std::size_t otherPin) = 0;
            virtual void getLink(ComponentPin *pin) = 0;
            virtual int getNbLinks() const = 0;
            virtual void dump() const = 0;
            virtual std::string getName() const = 0;
            virtual std::string getType() const = 0;
    };
}

#endif /* !ICOMPONENT_HPP_ */
