#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed();                      // Конструктор по умолчанию
    ~Fixed();                     // Деструктор
    Fixed(const Fixed &other);    // Конструктор копирования
    Fixed &operator=(const Fixed &other); // Оператор присваивания
    int getRawBits(void) const;   // Геттер
    void setRawBits(int const raw); // Сеттер
};

#endif
