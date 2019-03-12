/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** ComponentPin.cpp
*/

#include "ComponentPin.hpp"
#include <iostream>

namespace nts {
    ComponentPin::ComponentPin(IComponent *component, pinType type, Tristate state, std::size_t id)
    {
        this->component = component;
        this->type = type;
        this->state = state;
        this->id = id;
    }

    ComponentPin::~ComponentPin()
    {
    }

    IComponent *ComponentPin::getComponent() const
    {
        return (this->component);
    }

    pinType ComponentPin::getType() const
    {
        return (this->type);
    }

    Tristate ComponentPin::getState() const
    {
        return (this->state);
    }

    void ComponentPin::setState(Tristate newState)
    {
        this->state = newState;
    }

    std::size_t ComponentPin::getId() const
    {
        return (this->id);
    }
}
