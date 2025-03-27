#include "Character.hpp"

// Character.cpp

Character::Character(std::string const & name) : _name(name) {
    for (int i = 0; i < 4; ++i) {
        _inventory[i] = NULL; // Было nullptr, заменили на NULL
    }
}

Character::Character(Character const & other) : _name(other._name) {
    for (int i = 0; i < 4; ++i) {
        if (other._inventory[i]) {
            _inventory[i] = other._inventory[i]->clone();
        } else {
            _inventory[i] = NULL; // Было nullptr
        }
    }
}

Character& Character::operator=(Character const & other) {
    if (this != &other) {
        _name = other._name;
        for (int i = 0; i < 4; ++i) {
            delete _inventory[i];
            if (other._inventory[i]) {
                _inventory[i] = other._inventory[i]->clone();
            } else {
                _inventory[i] = NULL; // Было nullptr
            }
        }
    }
    return *this;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        _inventory[idx] = NULL; //// Удаляем предмет из слота
    }
}


Character::~Character() {
    for (int i = 0; i < 4; ++i) {
        delete _inventory[i]; // Удаляем все объекты из инвентаря
    }
}

std::string const & Character::getName() const {
    return _name; // Возвращаем имя персонажа
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; ++i) {
        if (!_inventory[i]) {
            _inventory[i] = m; // Оборудуем предмет в первый пустой слот
            return;
        }
    }
}


void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && _inventory[idx]) {
        _inventory[idx]->use(target); // Используем предмет из слота
    }
}