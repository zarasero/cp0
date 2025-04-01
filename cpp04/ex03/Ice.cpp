// Реализация методов Ice.cpp
#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {} // Устанавливаем тип "ice"

Ice::Ice(Ice const & other) : AMateria(other) {} // Конструктор копирования

Ice& Ice::operator=(Ice const & other) {
    if (this != &other) {
        AMateria::operator=(other); // Вызываем оператор присваивания базового класса
    }
    return *this;
}

Ice::~Ice() {} // Виртуальный деструктор

// Метод клонирования
AMateria* Ice::clone() const {
    return new Ice(*this); // Создаем копию объекта Ice
}

// Метод использования
void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}