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
    int getValue(void) const;   // Геттер
    void setValue(int const raw); // Сеттер
    Fixed(const int value);
    Fixed(const float value);
    int toInt() const;
    float toFloat() const;
    bool operator>(const Fixed& obj) const;
    bool operator>=(const Fixed& obj) const;
    bool operator<(const Fixed& obj) const;
    bool operator<=(const Fixed& obj) const;
    bool operator==(const Fixed& obj) const;
    bool operator!=(const Fixed& obj) const;
    Fixed operator+(const Fixed &obj) const;
    Fixed operator-(const Fixed &obj) const;
    Fixed operator*(const Fixed &obj) const;
    Fixed operator/(const Fixed &obj) const;
    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);
    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);

};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif