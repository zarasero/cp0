#include "Base.hpp"

// Function to generate a random Base* pointing to A, B, or C
Base* generate(void) {
    int random_choice = rand() % 3;
    if (random_choice == 0)
        return new A();
    else if (random_choice == 1)
        return new B();
    else
        return new C();
}

// Function to identify the type using a pointer
void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

// Function to identify the type using a reference
void identify(Base& p) {
    try {
        A& a = dynamic_cast<A&>(p);
        (void) a;
        std::cout << "A" << std::endl;
    } catch (std::exception& e) {
        try {
            B& b = dynamic_cast<B&>(p);
            (void) b;
            std::cout << "B" << std::endl;
        } catch (std::exception& e) {
            std::cout << "C" << std::endl;
        }
    }
}

int main() {
    // Initialize random seed
    srand(time(0));

    // Generate random Base* and identify it using pointer
    Base* obj = generate();
    identify(obj);  // Identify using pointer

    // Identify the same object using reference
    identify(*obj);  // Identify using reference

    // Clean up dynamically allocated memory
    delete obj;

    return 0;
}

/*Таким образом, srand(time(NULL)) делает так, 
что rand() выдает разные результаты при каждом запуске.
Понимание работы dynamic_cast

Как dynamic_cast работает с указателями (без исключений).
Как dynamic_cast работает со ссылками (с исключениями).
dynamic_cast проверяет корректность приведения и возвращает nullptr (если используется с указателем) 
или выбрасывает исключение (если используется со ссылкой).*/