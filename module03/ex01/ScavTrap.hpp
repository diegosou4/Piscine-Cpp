#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap:public ClapTrap
{
    private:
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
};


#endif