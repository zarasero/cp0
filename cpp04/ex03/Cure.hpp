#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();
    virtual ~Cure();
    virtual AMateria* clone() const; // Возвращает новый экземпляр Cure
    virtual void use(ICharacter& target); // Выводит специфическое сообщение для Cure
};

#endif