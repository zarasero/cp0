
#include "Array.hpp"
/*
int main() {
    try {
        // 1️⃣ Создание пустого массива
        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;

        // 2️⃣ Создание массива из 5 элементов (инициализированных по умолчанию)
        Array<int> intArray(5);
        std::cout << "intArray size: " << intArray.size() << std::endl;

        // 3️⃣ Заполняем массив значениями
        for (size_t i = 0; i < intArray.size(); i++) {
            intArray[i] = i * 10;
        }

        // 4️⃣ Выводим значения массива
        std::cout << "intArray elements: ";
        for (size_t i = 0; i < intArray.size(); i++) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        // 5️⃣ Проверка конструктора копирования
        Array<int> copiedArray = intArray;
        std::cout << "Copied array: ";
        for (size_t i = 0; i < copiedArray.size(); i++) {
            std::cout << copiedArray[i] << " ";
        }
        std::cout << std::endl;

        // 6️⃣ Проверка оператора присваивания
        Array<int> assignedArray;
        assignedArray = intArray;
        std::cout << "Assigned array: ";
        for (size_t i = 0; i < assignedArray.size(); i++) {
            std::cout << assignedArray[i] << " ";
        }
        std::cout << std::endl;

        // 7️⃣ Проверка исключения (выход за границы массива)
        std::cout << "Trying to access out-of-bounds index..." << std::endl;
        std::cout << intArray[10] << std::endl; // Ошибка! Бросит исключение
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
*/


#define MAX_VAL 750  // Определяем максимальный размер массива, равный 750.

int main(int, char**)  // Главная функция, стандартный формат main в C++.
{
    Array<int> numbers(MAX_VAL);  // Создаём объект массива numbers с размером MAX_VAL (750), элементы будут типа int.
    int* mirror = new int[MAX_VAL];  // Выделяем динамическую память для массива mirror размером MAX_VAL (750).

    srand(time(NULL));  // Инициализация генератора случайных чисел с использованием текущего времени.

    // Заполнение массива numbers и массива mirror случайными числами.
    for (int i = 0; i < MAX_VAL; i++)  // Цикл для обхода всех элементов массивов.
    {
        const int value = rand();  // Генерация случайного числа и присваивание его переменной value.
        numbers[i] = value;  // Присваиваем сгенерированное случайное значение элементу массива numbers.
        mirror[i] = value;  // Присваиваем сгенерированное случайное значение элементу массива mirror.
    }

    // SCOPE: создаём временные копии массивов numbers и tmp.
    {
        Array<int> tmp = numbers;  // Копируем массив numbers в новый массив tmp.
        Array<int> test(tmp);  // Создаём ещё одну копию массива tmp в массиве test.
    }

    // Проверка, что данные в массиве numbers совпадают с данными в mirror.
    for (int i = 0; i < MAX_VAL; i++)  // Цикл для проверки всех элементов массивов.
    {
        if (mirror[i] != numbers[i])  // Если элементы массива mirror и numbers не равны.
        {
            std::cerr << "didn't save the same value!!" << std::endl;  // Выводим ошибку в консоль.
            return 1;  // Возвращаем 1, сигнализируя о ошибке.
        }
    }

    // Проверка выхода за границы массива на отрицательный индекс.
    try
    {
        numbers[-2] = 0;  // Пытаемся присвоить значение элементу массива с индексом -2 (невалидный индекс).
    }
    catch(const std::exception& e)  // Если произошла ошибка, перехватываем исключение.
    {
        std::cerr << e.what() << '\n';  // Выводим сообщение об ошибке.
    }

    // Проверка выхода за границы массива на индекс, равный длине массива.
    try
    {
        numbers[MAX_VAL] = 0;  // Пытаемся присвоить значение элементу массива с индексом MAX_VAL (вне диапазона).
    }
    catch(const std::exception& e)  // Если произошла ошибка, перехватываем исключение.
    {
        std::cerr << e.what() << '\n';  // Выводим сообщение об ошибке.
    }

    // Перезаполняем массив numbers новыми случайными числами.
    for (int i = 0; i < MAX_VAL; i++)  // Цикл для обхода всех элементов массива.
    {
        numbers[i] = rand();  // Присваиваем случайные значения элементам массива numbers.
    }

    delete [] mirror;  // Освобождаем динамически выделенную память для массива mirror.
    return 0;  // Возвращаем 0, сигнализируя о том, что программа завершена успешно.
}
