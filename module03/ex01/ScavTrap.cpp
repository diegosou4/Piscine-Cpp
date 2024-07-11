#include "ScavTrap.hpp"
#include <iostream>


ScavTrap::ScavTrap()
{
    std::cout << "Default constructor ScavTrap called" << std::endl;    
}

ScavTrap::~ScavTrap()
{

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Parameterized ScavTrap constructor called" << std::endl;
    std::cout << "Hit Points: " << _hitPoints << std::endl;
    std::cout << "Energy Points: " << _energyPoints << std::endl;
    std::cout << "Attack Damage: " << _attackDamage << std::endl;
}