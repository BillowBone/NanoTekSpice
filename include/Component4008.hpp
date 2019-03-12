/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4008.hpp
*/

#ifndef COMPONENT4008_HPP_
	#define COMPONENT4008_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Component4008 : public ComponentContainer {
        public:
            Component4008(const std::string &name);
            ~Component4008();
    };
}

#endif /* !COMPONENT4008_HPP_ */
