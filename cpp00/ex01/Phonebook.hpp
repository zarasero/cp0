#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <cstdlib>
#include <iomanip> // Для setw

class Phonebook
{

    public:
        Phonebook();
        ~Phonebook();
         void createContact(int i);
         int printSingleContact(int i);
         int trouveContact(std::string i);
         int printContact(int count);
         void err();
    private:
        Contact contact[9];

};

#endif