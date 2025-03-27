#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {} // Инициализация типа

AMateria::~AMateria() {} // Пустой деструктор

std::string const & AMateria::getType() const {
    return _type; // Возвращаем тип материи
}

void AMateria::use(ICharacter& target) {
    std::cout << "* uses materia on " << target.getName() << " *" << std::endl; // Стандартное поведение
}
