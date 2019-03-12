/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Component4801.hpp
*/

#ifndef COMPONENT4801_HPP_
	#define COMPONENT4801_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Component4801 : public ComponentContainer {
        public:
            Component4801(const std::string &name);
            ~Component4801();
    };
}

#endif /* !COMPONENT4801_HPP_ */
