
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::~ClapTrap() 
{
    std::cout << "Destructor ClapTrap Called !" << std::endl;
}
ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor Called !" << std::endl;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    _name = "Default";
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor ClatTrap Called !" << std::endl;
    _name = name;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "Copy Constructor Called !" << std::endl;
    *this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "Assignation Operator Called !" << std::endl;
    if(this != &obj)
    {
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _energyPoints = obj._energyPoints;
        _attackDamage = obj._attackDamage;
    }
    return *this;
}

bool ClapTrap::zeroType(int type, std::string name, std::string text)
{
    if(type <= 0)
    {
        std::cout << "ClapTrap " << name << " has no " << text << std::endl;
        return true;
    }
    return false;
}

void ClapTrap::attack(const std::string& target)
{
    if(zeroType(_energyPoints, _name, "energy"))
        return;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(zeroType(_hitPoints, _name, "hit points"))
        return;
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name <<  " received " << amount << " damage" << std::endl;  
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(zeroType(_energyPoints, _name, "energy"))
        return;
    std::cout << "ClapTrap " << _name << " is be repared receving " << amount << " healt points !" << std::endl; 
    _hitPoints += amount ;
    _energyPoints--;
}