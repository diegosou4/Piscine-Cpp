

#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
   _name = name;
}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon &club)
{
   _myweapon = &club;
}

void HumanB::attack()
{
   std::cout << _name << " attacks with their " << _myweapon->getType() << std::endl;
}