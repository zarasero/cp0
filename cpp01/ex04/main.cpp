#include <iostream>
#include <fstream>
#include <string>

// Функция для замены всех вхождений строки s1 на строку s2 в строке line
std::string replace(std::string line, const std::string& s1, const std::string& s2) {
    size_t pos = 0;  // Переменная для хранения позиции найденной подстроки
    // Ищем первое вхождение s1 в строке
    while ((pos = line.find(s1, pos)) != std::string::npos) {
        // Вместо использования replace, мы создаём новую строку с заменой
        line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
        // После замены продолжаем искать следующее вхождение, начиная с позиции после текущего
        pos += s2.length();  // Сдвигаем позицию для следующего поиска
    }
    return line;
}

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];  // Имя файла
    std::string s1 = argv[2];  // Строка, которую заменяем
    std::string s2 = argv[3];  // Строка, на которую заменяем

    std::ifstream inputFile(filename.c_str());  // Преобразуем filename в const char*
    if (!inputFile) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    std::string outputFilename = filename + ".replace";  // Создаем имя выходного файла
    std::ofstream outputFile(outputFilename.c_str());  // Преобразуем outputFilename в const char*
    if (!outputFile) {
        std::cerr << "Error: Could not create output file " << outputFilename << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        // Заменяем все вхождения s1 на s2
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;  // Записываем измененную строку в выходной файл
    }

    inputFile.close();
    outputFile.close();

    std::cout << "File successfully processed and saved as " << outputFilename << std::endl;

    return 0;
}
