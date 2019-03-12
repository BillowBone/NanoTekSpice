/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4001.hpp
*/

#ifndef COMPONENT4001_HPP_
	#define COMPONENT4001_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Component4001 : public ComponentContainer {
        public:
            Component4001(const std::string &name);
            ~Component4001();
            Tristate compute(std::size_t pin = 1) override;
    };
}

#endif /* !COMPONENT4001_HPP_ */
