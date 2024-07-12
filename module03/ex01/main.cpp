#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
    ScavTrap mySacv("Ak-48");
    
    mySacv.attack("Mellon");
    mySacv.guardGate();
    return (0);
}