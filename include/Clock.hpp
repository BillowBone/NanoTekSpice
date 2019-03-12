/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Clock.hpp
*/

#ifndef CLOCK_HPP_
	#define CLOCK_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Clock : public ComponentContainer {
        public:
            Clock(const std::string &name);
            ~Clock();
    };
}

#endif /* !CLOCK_HPP_ */
