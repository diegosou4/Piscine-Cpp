
#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    this->_name = "Default";
    std::cout << "Diamond Trap Default Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() 
{
    std::cout << "Diammond Trap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) 
{
    this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 30;
   std::cout << "DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) :  ClapTrap(obj), FragTrap(obj), ScavTrap(obj)
{
    std::cout << "DiamondTrap copy constructor called." << std::endl;
    *this = obj;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj) 
{
    std::cout << "DiamondTrap assignment operator called." << std::endl;
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
        this->_name = obj._name;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}