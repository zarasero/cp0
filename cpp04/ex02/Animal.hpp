#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

// 🐾 Базовый класс Animal
class Animal {
protected:
    std::string type; // 🏷️ Тип животного
public:
    // 🏗️ Конструктор
    Animal();
    
    // 🗑️ Виртуальный деструктор (важно для корректного удаления наследников)
    virtual ~Animal();
    
    // 🔍 Виртуальная функция для получения типа животного
    virtual std::string getType() const;
    
    // Теперь `makeSound()` чисто виртуальная, класс стал абстрактным!
    virtual void makeSound() const = 0;
    
    // 🔄 Оператор присваивания
    Animal &operator=(const Animal &other);
    
    // 📋 Конструктор копирования
    Animal(const Animal &other);
};

#endif
