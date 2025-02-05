#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <cstdlib>

class Phonebook
{

    public:
        Phonebook();
        ~Phonebook();
         void createContact(int i);
         void printContact(int i);
         int trouveContact(std::string i);
    private:
        Contact contact[8];

};

#endif