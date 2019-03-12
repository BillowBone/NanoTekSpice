/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** ComponentFactory.cpp
*/

#include "ComponentFactory.hpp"

namespace nts {
    ComponentFactory::ComponentFactory()
    {
    }

    ComponentFactory::~ComponentFactory()
    {
    }

    std::unique_ptr<IComponent> ComponentFactory::createComponent(const std::string &type, const std::string &value)
    {
        if (type == "4001")
            return (this->create4001(value));
        else if (type == "4008")
            return (this->create4008(value));
        else if (type == "4011")
            return (this->create4011(value));
        else if (type == "4013")
            return (this->create4013(value));
        else if (type == "4017")
            return (this->create4017(value));
        else if (type == "4030")
            return (this->create4030(value));
        else if (type == "4040")
            return (this->create4040(value));
        else if (type == "4069")
            return (this->create4069(value));
        else if (type == "4071")
            return (this->create4071(value));
        else if (type == "4081")
            return (this->create4081(value));
        else if (type == "4094")
            return (this->create4094(value));
        else if (type == "4503")
            return (this->create4503(value));
        else if (type == "4512")
            return (this->create4512(value));
        else if (type == "4514")
            return (this->create4514(value));
        else if (type == "clock")
            return (this->createClock(value));
        else if (type == "false")
            return (this->createFalse());
        else if (type == "true")
            return (this->createTrue());
        else if (type == "input")
            return (this->createInput(value));
        else if (type == "output")
            return (this->createOutput(value));
        else
            throw nts::TypeCompError("Unknown type component.", "Factory");
    }

    std::unique_ptr<IComponent> ComponentFactory::create4001(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4001(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4008(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4008(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4011(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4011(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4013(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4013(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4017(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4017(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4030(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4030(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4040(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4040(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4069(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4069(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4071(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4071(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4081(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4081(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4094(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4094(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4503(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4503(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4512(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4512(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4514(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4514(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::create4801(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Component4801(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::createClock(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Clock(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::createFalse() const noexcept
    {
        std::unique_ptr<IComponent> tmp(new False());

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::createTrue() const noexcept
    {
        std::unique_ptr<IComponent> tmp(new True());

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::createInput(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Input(value));

        return (tmp);
    }

    std::unique_ptr<IComponent> ComponentFactory::createOutput(const std::string &value) const noexcept
    {
        std::unique_ptr<IComponent> tmp(new Output(value));

        return (tmp);
    }
}
