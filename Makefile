##
## EPITECH PROJECT, 2019
## OOP - NanoTekSpice
## File description:
## Makefile NanoTekSpice
##

SRC	=	./src/Circuit/Circuit.cpp	\
		./src/Components/Component2716.cpp	\
		./src/Components/Component4001.cpp	\
		./src/Components/Component4008.cpp	\
		./src/Components/Component4011.cpp	\
		./src/Components/Component4013.cpp	\
		./src/Components/Component4017.cpp	\
		./src/Components/Component4030.cpp	\
		./src/Components/Component4040.cpp	\
		./src/Components/Component4069.cpp	\
		./src/Components/Component4071.cpp	\
		./src/Components/Component4081.cpp	\
		./src/Components/Component4094.cpp	\
		./src/Components/Component4503.cpp	\
		./src/Components/Component4512.cpp	\
		./src/Components/Component4514.cpp	\
		./src/Components/Component4801.cpp	\
		./src/Container/ComponentContainer.cpp	\
		./src/Errors/Errors.cpp			\
		./src/Factory/ComponentFactory.cpp	\
		./src/LogicGates/LogicGates.cpp	\
		./src/Parser/Parser.cpp	\
		./src/Pin/ComponentPin.cpp	\
		./src/SpecialComponents/Clock.cpp	\
		./src/SpecialComponents/False.cpp	\
		./src/SpecialComponents/Input.cpp	\
		./src/SpecialComponents/Output.cpp	\
		./src/SpecialComponents/True.cpp	\
		./src/UserInterface/UserInterface.cpp	\
		./src/main.cpp	\

NAME	=	nanotekspice

all:	$(NAME)

$(NAME):
		g++ $(SRC) -o $(NAME) -I./include/

clean:
			rm -rf ./*.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all
