/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** ComponentFactory.hpp
*/

#ifndef COMPONENTFACTORY_HPP_
	#define COMPONENTFACTORY_HPP_

#include "ComponentContainer.hpp"
#include "Component4001.hpp"
#include "Component4008.hpp"
#include "Component4011.hpp"
#include "Component4013.hpp"
#include "Component4017.hpp"
#include "Component4030.hpp"
#include "Component4040.hpp"
#include "Component4069.hpp"
#include "Component4071.hpp"
#include "Component4081.hpp"
#include "Component4094.hpp"
#include "Component4503.hpp"
#include "Component4512.hpp"
#include "Component4514.hpp"
#include "Component4801.hpp"
#include "Clock.hpp"
#include "False.hpp"
#include "True.hpp"
#include "Input.hpp"
#include "Output.hpp"

namespace nts {
    class ComponentFactory {
	    public:
            ComponentFactory();
            ~ComponentFactory();
            std::unique_ptr<IComponent> createComponent(const std::string &type, const std::string &value);	
        private:
            std::unique_ptr<IComponent> create4001(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4008(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4011(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4013(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4017(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4030(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4040(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4069(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4071(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4081(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4094(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4503(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4512(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4514(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4801(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> createClock(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> createFalse() const noexcept;
            std::unique_ptr<IComponent> createTrue() const noexcept;
            std::unique_ptr<IComponent> createInput(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> createOutput(const std::string &value) const noexcept;
    };
}

#endif /* !COMPONENTFACTORY_HPP_ */
