/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4040.hpp
*/

#ifndef COMPONENT4040_HPP_
	#define COMPONENT4040_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Component4040 : public ComponentContainer {
        public:
            Component4040(const std::string &name);
            ~Component4040();
    };
}

#endif /* !COMPONENT4040_HPP_ */
