/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** LogicGates.cpp
*/

#include "LogicGates.hpp"

namespace nts {
    Tristate LogicGates::andGate(Tristate a, Tristate b)
    {
        if (a == TRUE && b == TRUE)
            return (TRUE);
        else if (a == FALSE || b == FALSE)
            return (FALSE);
        else
            return (UNDEFINED);
    }

    Tristate LogicGates::orGate(Tristate a, Tristate b)
    {
        if (a == TRUE || b == TRUE)
            return (TRUE);
        else if (a == FALSE && b == FALSE)
            return (FALSE);
        else
            return (UNDEFINED);
    }

    Tristate LogicGates::notGate(Tristate a)
    {
        if (a == TRUE)
            return (FALSE);
        else if (a == FALSE)
            return (TRUE);
        else
            return (UNDEFINED);
    }

    Tristate LogicGates::nandGate(Tristate a, Tristate b)
    {
        if (a == TRUE && b == TRUE)
            return (FALSE);
        else if (a == FALSE || b == FALSE)
            return (TRUE);
        else
            return (UNDEFINED);
    }

    Tristate LogicGates::norGate(Tristate a, Tristate b)
    {
        if (a == TRUE || b == TRUE)
            return (FALSE);
        else if (a == FALSE && b == FALSE)
            return (TRUE);
        else
            return (UNDEFINED);
    }

    Tristate LogicGates::xorGate(Tristate a, Tristate b)
    {
        if ((a == TRUE && b == TRUE) || (a == FALSE && b == FALSE))
            return (FALSE);
        else if (a == TRUE || b == TRUE)
            return (TRUE);
        else if (a == FALSE || b == FALSE)
            return (TRUE);
        else
            return (UNDEFINED);
    }
}