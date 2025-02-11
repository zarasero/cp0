#include "Zombie.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    Zombie* x;
    x = zombieHorde(10, "x");
    for(int i = 0; i < 10; i++)
        x[i].announce();
    delete[] x;
    return (0);
}