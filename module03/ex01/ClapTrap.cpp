
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}
ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default Constructor Called !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor ClatTrap Called !" << std::endl;
    _name = name;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
     std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
     std::cout << "ClapTrap assignment operator called" << std::endl;
    if(this != &obj)
    {
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _energyPoints = obj._energyPoints;
        _attackDamage = obj._attackDamage;
    }
    return *this;
}

static bool zeroType(int type, std::string name)
{
    if(type <= 0)
    {
        std::cout << "ClapTrap " << name << " has no energy" << std::endl;
        return true;
    }
    return false;
}

void ClapTrap::attack(const std::string& target)
{
    if(zeroType(_energyPoints, _name))
        return;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name <<  " received " << amount << " damage" << std::endl;  
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_energyPoints <= 0)
    {
        std::cout << "ClapTrap has no energy to repare" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " is be repared receving " << amount << " healt points !" << std::endl; 
    _hitPoints += amount ;
    _energyPoints--;
}