#include "Zombie.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    Zombie* x;
    x = newZombie("x");
    Zombie y("y");
    delete x;
    randomChump("z");
    return (0);
}