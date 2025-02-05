#include <iostream>
#include <cctype>  // Для функции toupper()

int main(int argc, char **argv)
{
    int i = 1;

    // Проверяем, если аргументы не переданы
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        // Перебор всех аргументов
        while (argv[i])
        {
            int j = 0;  // Сброс счетчика для каждого аргумента
            // Перебор символов в каждом аргументе
            while (argv[i][j])
            {
                std::cout << (char)toupper(argv[i][j]);  // Преобразуем в верхний регистр и выводим
                j++;
            }
            i++;
            // Добавляем пробел между аргументами, но не после последнего
            if (argv[i]) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;  // Печатаем новую строку после завершения вывода
    }

    return 0;  // Успешное завершение программы
}
