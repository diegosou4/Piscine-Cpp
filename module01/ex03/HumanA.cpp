#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name)
{
   _my = Weapon("Diego");
}
HumanA::~HumanA()
{

}
// void HumanA::attack()
// {
//    std::cout << _name << " attacks with their " << _myWeapon.getType() << std::endl;
// }