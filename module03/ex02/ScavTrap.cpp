#include "ScavTrap.hpp"
#include <iostream>


ScavTrap::ScavTrap()
{
    std::cout << "Default constructor ScavTrap called" << std::endl;    
    _hitPoints = 0;
    _energyPoints = 0;
    _attackDamage = 0;
    _name = "Default";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;

}
ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "ScavTrap assignment operator called" << std::endl;
    if(this != &obj)
    {
        ClapTrap::operator=(obj);
    }
    return *this;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "Parameterized ScavTrap constructor called" << std::endl;
      _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " now in Guard Gate !" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
    if(_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " has no energy" << std::endl;
        return;
    } 
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}