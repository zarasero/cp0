// Cure.hpp (Специфический класс Cure)
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();  // Конструктор по умолчанию
    Cure(Cure const & other); // Конструктор копирования
    Cure& operator=(Cure const & other); // Оператор присваивания
    virtual ~Cure(); // Виртуальный деструктор

    virtual AMateria* clone() const; // Метод клонирования, возвращающий новый объект Cure
    virtual void use(ICharacter& target); // Переопределенный метод использования
};

#endif // CURE_HPP