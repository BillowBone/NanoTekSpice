/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Output.hpp
*/

#ifndef OUTPUT_HPP_
	#define OUTPUT_HPP_

#include "ComponentContainer.hpp"

namespace nts {
    class Output : public ComponentContainer {
	    public:
		    Output(const std::string &name);
		    ~Output();
    };
}

#endif /* !OUTPUT_HPP_ */