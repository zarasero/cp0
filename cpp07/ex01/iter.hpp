#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

// Шаблонная функция iter
/*template <typename T, typename Func>
void iter(T* array, size_t length, Func &function) {
    for (size_t i = 0; i < length; i++) {
        function(array[i]);  // Вызываем переданную функцию для каждого элемента
    }
}*/

template<typename T>
void iter(T* array, size_t length, void (*f)(T &))
{
    for (size_t i = 0; i < length; i++) {
        f(array[i]);  // Вызываем переданную функцию для каждого элемента
    }

}

#endif // ITER_HPP
