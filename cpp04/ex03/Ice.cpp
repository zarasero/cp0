#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {} // Устанавливаем тип "ice"

Ice::~Ice() {}

AMateria* Ice::clone() const {
    return new Ice(); // Клонируем новый объект Ice
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; // Специфическое сообщение
}