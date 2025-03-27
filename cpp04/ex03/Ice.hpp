#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();
    virtual ~Ice();
    virtual AMateria* clone() const; // Возвращает новый экземпляр Ice
    virtual void use(ICharacter& target); // Выводит специфическое сообщение для Ice
};

#endif // ICE_HPP