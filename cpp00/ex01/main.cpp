#include <iostream>
#include <string>
#include "Phonebook.hpp"
#include "Contact.hpp"

int main() {
    Phonebook phonebook;
    std::string command;
    int index;
    int count = 0;


    while (1)  
    {
        std::cout << std::endl<< std::endl;
        std::cout << "Choose one command (ADD, SEARCH, EXIT): " << std::endl;
        std::getline(std::cin, command);

        if (command == "ADD")
        {
            std::system("clear");
            static int i = 0;  // Используем static, чтобы переменная сохраняла значение
            phonebook.createContact(i + 1);  // Вызываем метод у объекта, а не через `Phonebook::`
            i = (i + 1) % 8;  // Заполняем массив по кругу
            if (count < 8)  // Ограничиваем максимумом
                count++;
        }
        else if (command == "EXIT")
        {
            std::system("clear");
            break;
        }
        else if (command == "SEARCH")
        {
            std::system("clear");
           if (phonebook.printContact(count))
                continue;
            std::cout << "CHOOSE CONTACT INDEX: "<< std::endl;
            std::getline(std::cin, command);
            index = phonebook.trouveContact(command);
            if (index == -1 || index > count)
            {
                std::cout << "ERROR: Invalid index." << std::endl << std::endl << std::endl;
                continue;
            }
            phonebook.printSingleContact(index);
        }
        else
        {
            phonebook.err();
        }
    }

    return 0;
}
