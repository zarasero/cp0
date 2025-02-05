#include <iostream>
#include <string>
#include "Phonebook.hpp"
#include "Contact.hpp"

int main() {
    Phonebook phonebook;
    std::string command;
    int index;
    int a = 1;

    std::cout << "PHONEBOOK" << std::endl;
    std::cout << "Choose one command" << std::endl;
    while (1)  
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): "<< std::endl;
        std::cin >> command;

        if (command == "ADD")
        {
            static int i = 0;  // Используем static, чтобы переменная сохраняла значение
            phonebook.createContact(i);  // Вызываем метод у объекта, а не через `Phonebook::`
            i = (i + 1) % 8;  // Заполняем массив по кругу
            a = 0;
        }
        else if (command == "EXIT")
            break;
        else if (command == "SEARCH")
        {
            if (a)
            {
                std::cout << "0 CONTACT "<< std::endl;
                continue;
            }
            std::cout << "CHOOSE CONTACT "<< std::endl;
            std::cin >> command;
            index = phonebook.trouveContact(command);
            if (index == -1)
            {
                std::cout << "ERROR "<< std::endl;
                continue;
            }
            phonebook.printContact(index);
        }
    }


    return 0;
}
