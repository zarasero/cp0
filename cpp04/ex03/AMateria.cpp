// Реализация методов AMateria.cpp
#include "AMateria.hpp"
#include "ICharacter.hpp"

// Конструктор с параметром, который инициализирует тип материи
AMateria::AMateria(std::string const & type) : _type(type) {}

// Конструктор копирования
AMateria::AMateria(AMateria const & other) : _type(other._type) {}

// Оператор присваивания
AMateria& AMateria::operator=(AMateria const & other) {
    if (this != &other) {
        _type = other._type; // Копируем значение типа
    }
    return *this;
}

// Виртуальный деструктор
AMateria::~AMateria() {}

// Геттер для получения типа материи
std::string const & AMateria::getType() const {
    return _type;
}

// Метод использования материи
void AMateria::use(ICharacter& target) {
    std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}