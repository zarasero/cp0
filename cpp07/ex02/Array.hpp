#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept> // Для std::exception
#include <cstdlib>  // Для rand и srand
#include <ctime>  

// Шаблонный класс Array<T>
template <typename T>
class Array {
private:
    T* data;       // Указатель на динамический массив
    size_t length; // Количество элементов

public:
    // 1️⃣ Конструктор без параметров (создаёт пустой массив)
    Array() : data(NULL), length(0) {}


    // 2️⃣ Конструктор с параметром (создаёт массив из n элементов)
    Array(size_t n) : length(n) {
        data = new T[n](); // Выделяем память и инициализируем элементы по умолчанию
    }

    // 3️⃣ Конструктор копирования (создаёт копию массива)
    Array(const Array& other) : length(other.length) {
        data = new T[length]; // Выделяем новую память
        for (size_t i = 0; i < length; i++) {
            data[i] = other.data[i]; // Копируем элементы
        }
    }

    // 4️⃣ Оператор присваивания (глубокое копирование)
    Array& operator=(const Array& other) {
        if (this != &other) { // Проверка на самоприсваивание
            delete[] data; // Освобождаем старую память

            length = other.length;
            data = new T[length]; // Выделяем новую память

            for (size_t i = 0; i < length; i++) {
                data[i] = other.data[i]; // Копируем элементы
            }
        }
        return *this;
    }

    // 5️⃣ Деструктор (освобождает память)
    ~Array() {
        delete[] data;
    }

    // 6️⃣ Оператор [] для доступа к элементу (с проверкой границ)
    T& operator[](size_t index) {
        if (index >= length) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    // 6️⃣ Оператор [] (константная версия для работы с const объектами)
    const T& operator[](size_t index) const {
        if (index >= length) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    // 7️⃣ Метод size() — возвращает количество элементов
    size_t size() const {
        return length;
    }
};

#endif // ARRAY_HPP
