#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
public:
    Dog();
    ~Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    void makeSound() const;
private:
    Brain* brain;
};

#endif