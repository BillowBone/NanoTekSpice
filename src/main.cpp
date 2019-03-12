/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** main.cpp
*/

#include "Parser.hpp"
#include <stdio.h>

int main(int argc, char *argv[])
{
    try {
        nts::Parser parse(argc, argv);
    } catch (const nts::NanoError &e) {
        return (84);
    }
}
