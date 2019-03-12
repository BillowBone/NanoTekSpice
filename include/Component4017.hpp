/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4017.hpp
*/

#ifndef COMPONENT4017_HPP_
	#define COMPONENT4017_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Component4017 : public ComponentContainer {
        public:
            Component4017(const std::string &name);
            ~Component4017();
    };
}

#endif /* !COMPONENT4017_HPP_ */
