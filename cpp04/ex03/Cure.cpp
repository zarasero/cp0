#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {} // Устанавливаем тип "cure"

Cure::~Cure() {}

AMateria* Cure::clone() const {
    return new Cure(); // Клонируем новый объект Cure
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; // Специфическое сообщение
}