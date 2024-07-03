#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &newweapon) 
    : _my(newweapon)  {
        _name = name;
}
HumanA::~HumanA()
{

}
void HumanA::attack()
{
   std::cout << _name << " attacks with their " << _my.getType() << std::endl;
}