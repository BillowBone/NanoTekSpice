# NanoTekSpice
NanoTekSpice project for the Epitech School

This project is apart of the Oriented Object Programming curse which is in C++

The goal of the NanoTekSpice is to reproduce the behaviour of some famouses chipsets and build a whole circuit with links between each chipsets so you can inject some input values in the circuit and watch the outputs

You must provide a configuration file with the .nts extension which is made of two parts : a .chipsets section with the type of a chipset and its name +  a .links section with two values per line that indicates the links to be done

Once the program is launched, it prints the value of each output added to the circuit and then the user can enter commands to continue its simulations.
These commands are:
    simulate
    display
    inputname=value {-1, 0, 1}
    exit

Example of a configuration file:

.chipsets:
input a
input b
4081 andgate
output c
.links:
a:1 andgate:1
b:1 andgate:2
andgate:3 c:1
