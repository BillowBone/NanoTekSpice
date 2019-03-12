/*
** EPITECH PROJECT, 2019
** OOP - NanoTekSpice
** File description:
** Circuit.cpp
*/

#include "UserInterface.hpp"

namespace nts {
    Circuit::Circuit(std::vector<std::vector<std::string>> chipsets, std::vector<std::vector<std::string>> links, std::vector<std::string> args)
    {
        UserInterface userI;

        this->callFactory(chipsets);
        this->applyLinks(links);
        this->processInputsValues(args, 1);
        this->simulate();
        this->display();

        while (1) {
            userI.displayPrompt();
            userI.parseCmd(this);
        }
    }

    Circuit::~Circuit()
    {
    }

    int Circuit::countInputs() const
    {
        int inputs = 0;

        for (int i = 0; i < this->components.size(); i++) {
            if (this->components[i]->getType() == "Input" || this->components[i]->getType() == "Clock")
                inputs++;
        }
        return (inputs);
    }

    int Circuit::getComponentIdByName(std::string name) const
    {
        for (int i = 0; i < this->components.size(); i++) {
            if (this->components[i]->getName() == name)
                return (i);
        }
        throw BadInpError("Invalid input name.", "Circuit");
    }

    void Circuit::callFactory(std::vector<std::vector<std::string>> chipsets)
    {
        ComponentFactory factory;

        for (int i = 0; i < chipsets.size(); i++) {
            for (int j = 0; j < this->components.size(); j++) {
                if (this->components[j]->getName() == chipsets[i][1])
                    throw SameNameError("At least two components share the same name.", "Circuit");
            }
            this->components.push_back(factory.createComponent(chipsets[i][0], chipsets[i][1]));
        }
    }

    void Circuit::applyLinks(std::vector<std::vector<std::string>> links)
    {
        for (int j = 0; j < links.size(); j++) {
            int idCmpnt = 0;
            int idCmpnt2 = 0;
            std::string name = Parser::getComponentName(links[j][0]);
            std::string name2 = Parser::getComponentName(links[j][1]);
            for (int k = 0; k < this->components.size(); k++) {
                if (this->components[k]->getName() == name)
                    idCmpnt = k;
                if (this->components[k]->getName() == name2)
                    idCmpnt2 = k;
            }
            int idPin = Parser::getIndexPin(*this->components[idCmpnt].get(), links[j][0]);
            int idPin2 = Parser::getIndexPin(*this->components[idCmpnt2].get(), links[j][1]);
            if (idPin == idPin2 && idCmpnt == idCmpnt2)
                throw InvalidLinkError("A given pin can't be linked with himself.", "Circuit");
            this->components[idCmpnt2]->setLink(idPin2, *this->components[idCmpnt], idPin);
            if (idCmpnt != idCmpnt2)
                this->components[idCmpnt]->setLink(idPin, *this->components[idCmpnt2], idPin2);
        }
        for (int l = 0; l < this->components.size(); l++) {
            if (this->components[l]->getType() == "Output" && this->components[l]->getNbLinks() == 0)
                throw OutpLinkError("At least one output isn't link to anything.", "Circuit");
        }
    }

    void Circuit::processInputsValues(std::vector<std::string> args, int opt)
    {
        if (this->countInputs() != args.size() && opt == 1)
            throw nts::InpValError("Unmatching input declaration.", "Circuit");
        for (int n = 0; n < args.size(); n++) {
            int id = getComponentIdByName(Parser::getInputInfos(args[n], 1));
            if (this->components[id]->getType() != "Input" && this->components[id]->getType() != "Clock" && opt == 1)
                throw BadInpError("This component is not an input nor a clock", "Circuit");
            if (this->components[id]->getType() != "Input" && opt == 2)
                throw BadInpError("This component is not an input", "Circuit");
            std::string value = Parser::getInputInfos(args[n], 2);
            ComponentPin *pin = this->components[id]->getPin(1);

            if (value == "1")
                pin->setState(TRUE);
            else if (value == "0")
                pin->setState(FALSE);
            else if (value == "-1")
                pin->setState(UNDEFINED);
            else
                throw InpValError("No valid initializer for input value.", "Circuit");
        }
    }

    void Circuit::dumpCircuit() const
    {
        for (int i = 0; i < this->components.size(); i++) {
            this->components[i]->dump();
        }
    }

    void Circuit::netInputRt(std::string cmd)
    {
        std::vector<std::string> tmp;

        tmp.push_back(cmd);
        processInputsValues(tmp, 2);
    }

    void Circuit::simulate()
    {
        for (int i = 0; i < this->components.size(); i++) {
            if (this->components[i]->getType() != "Output") {
                this->components[i]->compute();
            }
        }
        for (int j = 0; j < this->components.size(); j++) {
            if (this->components[j]->getType() == "Output") {
                ComponentPin *pin = this->components[j]->getPin(1);
                this->components[j]->getLink(pin);
            }
        }
        this->reverseClocksValues();
    }

    void Circuit::display()
    {
        std::vector<int> indexes;
        int tmp = 0;

        for (int i = 0; i < this->components.size(); i++) {
            if (this->components[i]->getType() == "Output")
                indexes.push_back(i);
        }
        for (int j = 0; j < indexes.size() - 1; j++) {
            if (this->components[indexes[j]]->getName().compare(this->components[indexes[j + 1]]->getName()) > 0) {
                tmp = indexes[j];
                indexes[j] = indexes[j + 1];
                indexes[j + 1] = tmp;
                j = -1;
            }
        }
        for (int k = 0; k < indexes.size(); k++) {
            ComponentPin *pin = this->components[indexes[k]]->getPin(1);
            std::cout << this->components[indexes[k]]->getName() << "=";
            if (pin->getState() == UNDEFINED)
                std::cout << "U";
            else if (pin->getState() == FALSE)
                std::cout << "0";
            else if (pin->getState() == TRUE)
                std::cout << "1";
            std::cout << std::endl;
        }
    }

    void Circuit::reverseClocksValues()
    {
        ComponentPin *pin;

        for (int i = 0; i < this->components.size(); i++) {
            if (this->components[i]->getType() == "Clock") {
                pin = this->components[i]->getPin(1);
                if (pin->getState() == TRUE)
                    pin->setState(FALSE);
                else if (pin->getState() == FALSE)
                    pin->setState(TRUE);  
            }
        }
    }
}
