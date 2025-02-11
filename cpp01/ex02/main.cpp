#include <iostream>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    std::string a = "HI THIS IS BRAIN";
    std::string* stringPTR = &a;
    std::string stringREF = a;

    std::cout << "The memory address of the string variable " << &a << std:: endl;
    std::cout << "The memory address held by stringPTR " << stringPTR << std:: endl;
    std::cout << "The memory address held by stringREF " << &stringREF << std:: endl << std:: endl;

    std::cout << "The value of the string variable " << a << std:: endl;
    std::cout << "The value pointed to by stringPTR " << *stringPTR << std:: endl;
    std::cout << "The value pointed to by stringREF " << stringREF << std:: endl;

    //std::cout << "ADD " << &stringPTR << std:: endl;
    return (0);
}