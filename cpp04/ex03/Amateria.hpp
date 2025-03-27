#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter; // Предварительное объявление интерфейса ICharacter

class AMateria {
protected:
    std::string _type; // Тип материи

public:
    AMateria(std::string const & type); // Конструктор принимает строку типа
    virtual ~AMateria(); // Виртуальный деструктор

    std::string const & getType() const; // Возвращает тип материи
    virtual AMateria* clone() const = 0; // Чисто виртуальная функция для клонирования
    virtual void use(ICharacter& target); // Использование материи с целью
};

#endif // AMATERIA_HPP
