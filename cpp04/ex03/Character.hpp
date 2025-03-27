#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
    std::string _name; // Имя персонажа
    AMateria* _inventory[4]; // Инвентарь на 4 слота

public:
    Character(std::string const & name);
    Character(Character const & other);
    Character& operator=(Character const & other);
    virtual ~Character();

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif // CHARACTER_HPP