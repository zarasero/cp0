#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

// Шаблонная функция swap: меняет местами два аргумента
template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// Шаблонная функция min: возвращает наименьший из двух аргументов
template <typename T>
T min(const T& a, const T& b) {
    return (a < b) ? a : b;
}

// Шаблонная функция max: возвращает наибольший из двух аргументов
template <typename T>
T max(const T& a, const T& b) {
    return (a > b) ? a : b;
}

#endif
