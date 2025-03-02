
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main() {
    std::cout << "--- Creating Animal Array ---" << std::endl;
    const int size = 4;
    Animal* animals[size];
    
    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();
    
    std::cout << "\n--- Making Sounds ---" << std::endl;
    for (int i = 0; i < size; i++)
        animals[i]->makeSound();
    
    std::cout << "\n--- Deleting Animal Array ---" << std::endl;
    for (int i = 0; i < size; i++)
        delete animals[i];
    
    std::cout << "\n--- Testing Deep Copy ---" << std::endl;
    Dog originalDog;
    originalDog.makeSound();
    Dog copiedDog = originalDog;
    copiedDog.makeSound();
    
    return 0;
}