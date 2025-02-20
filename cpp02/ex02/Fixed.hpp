#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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
    Fixed(const int value);
    Fixed(const float value);
    int toInt() const;
    float toFloat() const;

};
std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif