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
        this->value = other.getRawBits(); // Копируем значение
    }
    return *this; // Возвращаем текущий объект
}

// Геттер (получение значения)
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

// Сеттер (установка значения)
void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

