
#include "Cat.hpp"

Cat::Cat() : Animal() {
    type = "Cat";
    std::cout << "🐱 Cat constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "🐱 Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "🐱 Cat copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.getType();
    return *this;
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "🐱 Cat copy constructor called" << std::endl;
    *this = other;
}

void Cat::makeSound() const {
    std::cout << "🐱 Cat sound" << std::endl;
}
