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

bool operator>(const Fixed& obj) const {
    return this->value > obj.value;
}

bool operator>=(const Fixed& obj) const {
    return this->value >= obj.value;
}

bool operator<(const Fixed& obj) const {
    return this->value < obj.value;
}

bool operator<=(const Fixed& obj) const {
    return this->value <= obj.value;
}

bool operator==(const Fixed& obj) const {
    return this->value == obj.value;
}

bool operator!=(const Fixed& obj) const {
    return this->value != obj.value;
}

Fixed Fixed::operator+(const Fixed &obj) const {
    Fixed result;
    result.value = this->value + obj.value;  // Сложение без коррекции
    return result;
}

Fixed Fixed::operator-(const Fixed &obj) const {
    Fixed result;
    result.value = this->value - obj.value;  // Вычитание без коррекции
    return result;
}

Fixed Fixed::operator*(const Fixed &obj) const {
    Fixed result;
    result.value = (this->value * obj.value) >> Fixed::fractionalBits;  // Коррекция после умножения
    return result;
}

Fixed Fixed::operator/(const Fixed &obj) const {
    Fixed result;
    result.value = ((this->value << Fixed::fractionalBits) / obj.value);
    return result;
}

Fixed& Fixed::operator++() {
    ++this->value;  // Увеличиваем значение
    return *this;   // ✅ Возвращаем ссылку (Fixed&)
}

Fixed& Fixed::operator--() {
    --this->value;  // Увеличиваем значение
    return *this;   // ✅ Возвращаем ссылку (Fixed&)
}

Fixed Fixed::operator++(int) {
    Fixed result(*this);  // Создаем копию текущего объекта
    ++this->value;        // Увеличиваем значение текущего объекта
    return result;        // Возвращаем копию result (старое значение)
}

Fixed Fixed::operator--(int) {
    Fixed result(*this);  // Создаем копию текущего объекта
    --this->value;        // Увеличиваем значение текущего объекта
    return result;        // Возвращаем копию result (старое значение)
}




