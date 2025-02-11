
#include "Zombie.hpp"
Zombie::Zombie()
{

};

Zombie::Zombie(std::string name):name(name)
{
};
void Zombie::setName(std::string name)
{
    this->name = name;
}
Zombie::~Zombie()
{
    std::cout << name << ": is dead" << std:: endl;
};

void Zombie:: announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
