#include "Dog.hpp"

Dog::Dog () : Animal() {
    type = "Dog";
    brain = new Brain;
    std::cout << "🐶 Dog constructor called" << std::endl;
}

Dog::~Dog () {
    std::cout << "🐶 Dog destructor called" << std::endl;
    delete brain;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "🐶 Dog copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
        delete this->brain;  // Освобождаем старый `brain`
        this->brain = new Brain(*other.brain);  // Глубокая копия
    }
    return *this;
}


Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "🐶 Dog copy constructor called" << std::endl;
    this->brain = new Brain(*other.brain); // ✅ Глубокая копия!
}

void Dog::makeSound() const {
    std::cout << "🐶 Dog sound" << std::endl;
}