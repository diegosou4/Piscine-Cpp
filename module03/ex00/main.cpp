#include "ClapTrap.hpp"



int main()
{
    ClapTrap *myweapon = new ClapTrap("Ak-45");

    ClapTrap weapon("Ak-44");

    myweapon->attack("Melon");
    weapon.attack("potato");
    weapon.beRepaired(3);
    weapon.attack("potato");
    myweapon->beRepaired(4);
    myweapon->beRepaired(5);
    myweapon->beRepaired(3);
    myweapon->attack("Melon");
    myweapon->attack("Banana");
    myweapon->attack("Pinnaple");
    myweapon->attack("Apple");
    myweapon->attack("Grape");
    myweapon->attack("Strawberry");
    myweapon->attack("Coconut");
    myweapon->attack("Guava");
     myweapon->beRepaired(4);
    delete myweapon;
}