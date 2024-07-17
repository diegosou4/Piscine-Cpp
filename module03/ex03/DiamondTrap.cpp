
#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
    std::cout << "Diamond Trap Default Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() 
{
    std::cout << "Diammond Trap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) 
{
    _hitPoints = FragTrap::_hp;
    // _energyPoints = ScavTrap::_energyPoints;
    // std::cout << "Energy Points :" << _energyPoints << std::endl;
    _attackDamage = FragTrap::_at;
    std::cout << "Diamond Trap Parameterized Constructor called" << std::endl;
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