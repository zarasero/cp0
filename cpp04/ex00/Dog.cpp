#include "Dog.hpp"

Dog::Dog () : Animal() {
    type = "Dog";
    std::cout << "🐶 Dog constructor called" << std::endl;
}

Dog::~Dog () {
    std::cout << "🐶 Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog  &other) {
    std::cout << "🐶 Dog copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.getType();
    return *this;
}

Dog::Dog (const Dog  &other) : Animal(other) {
    std::cout << "🐶 Dog copy constructor called" << std::endl;
    *this = other;
}

void Dog::makeSound() const {
    std::cout << "🐶 Dog sound" << std::endl;
}