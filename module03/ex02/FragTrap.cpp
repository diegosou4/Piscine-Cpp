#include "FragTrap.hpp"
#include <string>
#include <iostream>


FragTrap::~FragTrap()
{
    std::cout << "Default Destructor FragTrap called" << std::endl;
}

FragTrap::FragTrap()
{
    std::cout << "Default constructor FragTrap called" << std::endl;   
    _hitPoints = 0;
    _energyPoints = 0;
    _attackDamage = 0;
    _name = "Default";
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    std::cout << "FragTrap assignment operator called" << std::endl;
    if(this != &obj)
    {
        ClapTrap::operator=(obj);
    }
    return *this;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
     std::cout << "Parameterized FragTrap constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap call High Fives Guys for help! " << std::endl;
}