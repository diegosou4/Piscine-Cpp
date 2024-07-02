
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}
Zombie::~Zombie()
{
    std::cout << _name << " he was destroyed" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}