// AMateria.hpp (Базовый класс AMateria)
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter; // Предварительное объявление интерфейса ICharacter (нужно для методов, которые принимают ссылку на ICharacter)

class AMateria {
protected:
    std::string _type; // Защищенное поле для хранения типа материи

public:
    AMateria(std::string const & type); // Конструктор, инициализирующий тип материи
    AMateria(AMateria const & other);   // Конструктор копирования
    AMateria& operator=(AMateria const & other); // Оператор присваивания
    virtual ~AMateria(); // Виртуальный деструктор для обеспечения полиморфизма

    std::string const & getType() const; // Возвращает тип материи
    virtual AMateria* clone() const = 0; // Чисто виртуальная функция для клонирования материи
    virtual void use(ICharacter& target); // Виртуальный метод использования материи
};

#endif // AMATERIA_HPP