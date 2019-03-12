/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4503.hpp
*/

#ifndef COMPONENT4503_HPP_
	#define COMPONENT4503_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Component4503 : public ComponentContainer {
        public:
            Component4503(const std::string &name);
            ~Component4503();
    };
}

#endif /* !COMPONENT4503_HPP_ */
