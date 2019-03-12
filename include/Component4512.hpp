/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4512.hpp
*/

#ifndef COMPONENT4512_HPP_
	#define COMPONENT4512_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Component4512 : public ComponentContainer {
        public:
            Component4512(const std::string &name);
            ~Component4512();
    };
}

#endif /* !COMPONENT4512_HPP_ */
