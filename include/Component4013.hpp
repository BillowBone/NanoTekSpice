/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4013.hpp
*/

#ifndef COMPONENT4013_HPP_
	#define COMPONENT4013_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Component4013 : public ComponentContainer {
        public:
            Component4013(const std::string &name);
            ~Component4013();
    };
}

#endif /* !COMPONENT4013_HPP_ */
