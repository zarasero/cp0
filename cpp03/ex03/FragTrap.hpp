#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
    // Конструкторы
    FragTrap();  // Конструктор по умолчанию
    FragTrap(std::string name);  // Конструктор с параметром
    FragTrap(const FragTrap& src);  // Конструктор копирования
    virtual ~FragTrap();  // Деструктор

    // Оператор присваивания
    FragTrap& operator=(const FragTrap& rhs);


    // Новый метод
    void highFiveGuys();
};

#endif