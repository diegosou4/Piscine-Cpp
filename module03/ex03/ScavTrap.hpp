#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap: public virtual ClapTrap
{
    private:
        
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &obj);
        ScavTrap  &operator=(const ScavTrap &obj);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
};


#endif