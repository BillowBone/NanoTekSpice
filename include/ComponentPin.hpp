/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** ComponentPin.hpp
*/

#ifndef COMPONENTPIN_HPP_
	#define COMPONENTPIN_HPP_

#include "IComponent.hpp"

namespace nts {
    enum pinType {
        INPUT,
        OUTPUT,
        OTHER
    };
    class ComponentPin {
        public:
            ComponentPin(IComponent *component, pinType type, Tristate state, std::size_t id);
            ~ComponentPin();
            IComponent *getComponent() const;
            pinType getType() const;
            Tristate getState() const;
            void setState(Tristate newState);
            std::size_t getId() const;
        private:
            IComponent *component;
            pinType type;
            Tristate state;
            std::size_t id;
    };
}

#endif /* !COMPONENTPIN_HPP_ */
