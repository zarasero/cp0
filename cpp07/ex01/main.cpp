#include "iter.hpp"

template <typename T>
void printElement(T& x) {
    std::cout << x << " ";
}

// Шаблонная функция, работающая с любым типом
template <typename T>
void doubleElement(T& x) {
    x *= 2;
}

int main() {
    // Тест с массивом int
    int arr[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    iter(arr, len, printElement);
    std::cout << std::endl;

    // Умножаем каждый элемент на 2
    iter(arr, len, doubleElement<int>);

    std::cout << "Modified array: ";
    iter(arr, len, printElement);
    std::cout << std::endl;

    return 0;
}
