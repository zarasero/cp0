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
    
    // 🔊 Виртуальная функция для издания звука (переопределяется в наследниках)
    virtual void makeSound() const;
    
    // 🔄 Оператор присваивания
    Animal &operator=(const Animal &other);
    
    // 📋 Конструктор копирования
    Animal(const Animal &other);
};

#endif
