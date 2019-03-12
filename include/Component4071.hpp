/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4071.hpp
*/

#ifndef COMPONENT4071_HPP_
	#define COMPONENT4071_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Component4071 : public ComponentContainer {
        public:
            Component4071(const std::string &name);
            ~Component4071();
            Tristate compute(std::size_t pin = 1) override;
    };
}

#endif /* !COMPONENT4071_HPP_ */
