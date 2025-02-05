
#include "Phonebook.hpp"
Phonebook::Phonebook() {
    // Здесь может быть инициализация, если это нужно
}

Phonebook::~Phonebook() {
    // Здесь можно освободить ресурсы, если они есть
}
void Phonebook::createContact(int i)
{
            std::string info;

            std::cout << "First name: ";
            std::getline(std::cin, info);
            contact[i].setFname(info);
            std::cout << "Last name: ";
            std::getline(std::cin, info);
            contact[i].setLname(info);
            std::cout << "Nickname: ";
            std::getline(std::cin, info);
            contact[i].setNname(info);
            std::cout << "Phone Number: ";
            std::getline(std::cin, info);
            contact[i].setPnumber(info);
            std::cout << "Darkest Secret: ";
            std::getline(std::cin, info);
            contact[i].setDSecret(info);
            system("clear");

            std::cout << "Choose one command" << std::endl;
}

void Phonebook::printContact(int i)
{
    if (!(i >= 0 && i < 8))
    {
        std::cout << "Error gg" << std::endl;
        return;
    }
    std::cout << contact[i].getFname() << std::endl;
    std::cout << contact[i].getLname() << std::endl;
    std::cout << contact[i].getNname() << std::endl;
    std::cout << contact[i].getPnumber() << std::endl;
    std::cout << contact[i].getDSecret() << std::endl;

}

int Phonebook::trouveContact(std::string i)
{
    if (i.compare("0") == 0)
        return 0;
    else if (i.compare("1") == 0)
        return 1;
    else if (i.compare("2") == 0)
        return 2;
    else if (i.compare("3") == 0)
        return 3;
    else if (i.compare("4") == 0)
        return 4;
    else if (i.compare("5") == 0)
        return 5;
    else if (i.compare("6") == 0)
        return 6;
    else if (i.compare("7") == 0)
        return 7;
    else 
        return -1;
}
