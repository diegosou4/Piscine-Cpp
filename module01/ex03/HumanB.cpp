

#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
   _name = name;
   _myweapon = NULL;
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
   if(_myweapon == NULL)
   {
      std::cout << _name << " has no weapon to attack with" << std::endl;
      return;
   }
   std::cout << _name << " attacks with their " << _myweapon->getType() << std::endl;
}