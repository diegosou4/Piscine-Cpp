
#include "Zombie.hpp"



Zombie::Zombie()
{
    std::cout << "Default Constructor is created" << std::endl;
}

Zombie::~Zombie()
{
       std::cout << _name << " he was destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}