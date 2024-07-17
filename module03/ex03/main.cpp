#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>


int main()
{
    DiamondTrap diamondTrap("Ak-47");
    std::cout << "-----------------------------------------------" << std::endl;
    diamondTrap.attack("target");
    std::cout << "-----------------------------------------------" << std::endl;
    DiamondTrap diamondTrap2(diamondTrap);
    std::cout << "-----------------------------------------------" << std::endl;
    diamondTrap.whoAmI();
    std::cout << "-----------------------------------------------" << std::endl;
    return (0);
}