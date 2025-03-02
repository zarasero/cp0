#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

// 🐾 Базовый класс Cat
class Cat: public Animal {
public:
    // 🏗️ Конструктор
    Cat();
    ~Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    void makeSound() const;
};

#endif