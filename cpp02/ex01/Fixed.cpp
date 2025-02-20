#include "Fixed.hpp"

// Конструктор по умолчанию
Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Деструктор
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Конструктор копирования
Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Используем оператор присваивания
}

// Оператор присваивания
Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) { // Проверяем, не присваиваем ли мы объект сам себе
        this->value = other.value; // Копируем значение
    }
    return *this; // Возвращаем текущий объект
}

// Геттер (получение значения)
int Fixed::getRawBits(void) const {
    //std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

// Сеттер (установка значения)
void Fixed::setRawBits(int const raw) {
    //std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->value = value << Fixed::fractionalBits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << Fixed::fractionalBits));
}

int Fixed::toInt() const {
    return this->value >> Fixed::fractionalBits;
}

float Fixed::toFloat() const {
    return (float)this->value / (1 << Fixed::fractionalBits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return out;
}

