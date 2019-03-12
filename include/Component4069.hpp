/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4069.hpp
*/

#ifndef COMPONENT4069_HPP_
	#define COMPONENT4069_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Component4069 : public ComponentContainer {
        public:
            Component4069(const std::string &name);
            ~Component4069();
            Tristate compute(std::size_t pin = 1) override;
    };
}

#endif /* !COMPONENT4069_HPP_ */
