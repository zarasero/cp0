
#include "Cat.hpp"

Cat::Cat() : Animal() {
    type = "Cat";
    brain = new Brain;
    std::cout << "🐱 Cat constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "🐱 Cat destructor called" << std::endl;
    delete brain;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "🐱 Cat copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;   // Копируем тип
        delete this->brain;        // Удаляем старую память
        this->brain = new Brain(*other.brain); // Глубокая копия!
    }
    return *this;
}


Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "🐱 Cat copy constructor called" << std::endl;
    this->brain = new Brain(*other.brain); // ✅ Глубокая копия!
}

void Cat::makeSound() const {
    std::cout << "🐱 Cat sound" << std::endl;
}
