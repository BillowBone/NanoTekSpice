/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4030.hpp
*/

#ifndef COMPONENT4030_HPP_
	#define COMPONENT4030_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Component4030 : public ComponentContainer {
        public:
            Component4030(const std::string &name);
            ~Component4030();
            Tristate compute(std::size_t pin = 1) override;
    };
}

#endif /* !COMPONENT4030_HPP_ */
