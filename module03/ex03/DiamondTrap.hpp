#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <string>

class DiamondTrap: public FragTrap, public ScavTrap
{
    private:
    std::string _name;
    public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &obj);
    DiamondTrap &operator=(const DiamondTrap &obj);
    
    void whoAmI();
} ;


#endif