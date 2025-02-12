#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "Level: DEBUG" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nLevel: INFO" << std::endl;
    harl.complain("INFO");

    std::cout << "\nLevel: WARNING" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nLevel: ERROR" << std::endl;
    harl.complain("ERROR");

    std::cout << "\nLevel: UNKNOWN" << std::endl;
    harl.complain("UNKNOWN");  // В случае неизвестного уровня

    return 0;
}
