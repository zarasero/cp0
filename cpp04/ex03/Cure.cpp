// Реализация методов Cure.cpp
#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {} // Устанавливаем тип "cure"

Cure::Cure(Cure const & other) : AMateria(other) {} // Конструктор копирования

Cure& Cure::operator=(Cure const & other) {
    if (this != &other) {
        AMateria::operator=(other); // Вызываем оператор присваивания базового класса
    }
    return *this;
}

Cure::~Cure() {} // Виртуальный деструктор

// Метод клонирования
AMateria* Cure::clone() const {
    return new Cure(*this); // Создаем копию объекта Cure
}

// Метод использования
void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
