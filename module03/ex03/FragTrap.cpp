#include "FragTrap.hpp"
#include <string>
#include <iostream>


int FragTrap::_isconfigured = 0;

FragTrap::~FragTrap()
{
    std::cout << "Default Destructor FragTrap called" << std::endl;
}

FragTrap::FragTrap()
{
    std::cout << "Default constructor FragTrap called" << std::endl;   
    if(_isconfigured == 0)
    {
        _hp = 0;
        _at = 0;
        _isconfigured += 1;
    }
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
    if(_isconfigured == 0)
    {
        _hp = _hitPoints;
        _at = _attackDamage;
        _isconfigured += 1;
    }
  
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap call High Fives Guys for help! " << std::endl;
}

int FragTrap::getHp(void)
{
    return _hp;
}

int FragTrap::getAt(void)
{
    return _at;
}