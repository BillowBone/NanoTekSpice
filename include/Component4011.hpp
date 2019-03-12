/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4011.hpp
*/

#ifndef COMPONENT4011_HPP_
	#define COMPONENT4011_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Component4011 : public ComponentContainer {
        public:
            Component4011(const std::string &name);
            ~Component4011();
            Tristate compute(std::size_t pin = 1) override;
    };
}

#endif /* !COMPONENT4011_HPP_ */
