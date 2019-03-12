/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4081.hpp
*/

#ifndef COMPONENT4081_HPP_
	#define COMPONENT4081_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Component4081 : public ComponentContainer {
        public:
            Component4081(const std::string &name);
            ~Component4081();
            Tristate compute(std::size_t pin = 1) override;
    };
}

#endif /* !COMPONENT4081_HPP_ */
