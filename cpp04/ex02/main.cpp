#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main() {
    // ❌ Ошибка компиляции: Animal теперь абстрактный!
    // Animal* a = new Animal(); 

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

    return 0;
}
