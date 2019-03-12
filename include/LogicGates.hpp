/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** LogicGates.hpp
*/

#ifndef LOGICGATES_HPP_
	#define LOGICGATES_HPP_

#include "IComponent.hpp"

namespace nts {
    class LogicGates {
        public:
            static Tristate andGate(Tristate a, Tristate b);
            static Tristate orGate(Tristate a, Tristate b);
            static Tristate notGate(Tristate a);
            static Tristate nandGate(Tristate a, Tristate b);
            static Tristate norGate(Tristate a, Tristate b);
            static Tristate xorGate(Tristate a, Tristate b);
    };
}

#endif /* !LOGICGATES_HPP_ */
