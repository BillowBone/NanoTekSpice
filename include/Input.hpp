/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Input.hpp
*/

#ifndef INPUT_HPP_
	#define INPUT_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Input : public ComponentContainer {
        public:
            Input(const std::string &name);
            ~Input();
    };
}

#endif /* !INPUT_HPP_ */
