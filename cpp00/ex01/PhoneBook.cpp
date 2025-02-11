
#include "Phonebook.hpp"
Phonebook::Phonebook() {
    // Здесь может быть инициализация, если это нужно
}

Phonebook::~Phonebook() {
    // Здесь можно освободить ресурсы, если они есть
}
void Phonebook::createContact(int i)
{
            std::string info_1;
            std::string info_2;
            std::string info_3;
            std::string info_4;
            std::string info_5;

            std::cout << "First name: ";
            while(info_1.length() == 0)
                std::getline(std::cin, info_1);
            contact[i].setFname(info_1);

            std::cout << "Last name: ";
            while(info_2.length() == 0)
                std::getline(std::cin, info_2);
            contact[i].setLname(info_2);

            std::cout << "Nickname: ";
            while(info_3.length() == 0)
                std::getline(std::cin, info_3);
            contact[i].setNname(info_3);

            std::cout << "Phone Number: ";
            while(info_4.length() == 0)
                std::getline(std::cin, info_4);
            contact[i].setPnumber(info_4);

            std::cout << "Darkest Secret: ";
            while(info_5.length() == 0)
                std::getline(std::cin, info_5);
            contact[i].setDSecret(info_5);

           // std::cout << "Choose one command" << std::endl;
}

int Phonebook::printSingleContact(int i)
{
    if (!(i >= 1 && i <= 8))
    {
        std::cout << "Error gg" << std::endl;
        return 1;
    }

    std::cout << std::endl<< std::endl << contact[i].getFname() << std::endl;
    std::cout << contact[i].getLname() << std::endl;
    std::cout << contact[i].getNname() << std::endl;
    std::cout << contact[i].getPnumber() << std::endl;
    std::cout << contact[i].getDSecret() << std::endl;
    return 0;

}

int Phonebook::trouveContact(std::string i)
{
    if (i.compare("1") == 0)
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
    else if (i.compare("8") == 0)
        return 8;
    else
        return -1;
}




std::string formatField(const std::string& str) {
    if (str.length() > 9) 
        return str.substr(0, 9) + ".";
    return str;
}

int Phonebook::printContact(int count) {
    if (count == 0)
    {
        std::cout << "No contacts available." << std::endl;
        return 1;
    }
    std::cout << std::setw(10) << "Index"   << "|"
              << "|" << std::setw(10) << "Fname"   << "|"
              << std::setw(10) << "Lname"   << "|"
              << std::setw(10) << "Nname"   << "|"
              << std::setw(10) << "Pnumber" << "|"
              << std::setw(10) << "DSecret" << "|" << std::endl;

    std::cout << std::string(66, '-') << std::endl;

    for (int i = 1; i <= count; i++) {
        std::cout << "|" << std::setw(10) << i
                  << "|" << std::setw(10) << formatField(contact[i].getFname())
                  << "|" << std::setw(10) << formatField(contact[i].getLname())
                  << "|" << std::setw(10) << formatField(contact[i].getNname())
                  << "|" << std::setw(10) << formatField(contact[i].getPnumber())
                  << "|" << std::setw(10) << formatField(contact[i].getDSecret())
                  << "|" << std::endl;
    }
    return 0;
}

void Phonebook::err() {
    std::system("clear");
    std::cout << "Invalid command. Use ADD, SEARCH, or EXIT." << std::endl;
    std::cout << std::endl<< std::endl;
   // std::system("clear");
        
}