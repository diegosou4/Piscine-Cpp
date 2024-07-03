

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string type)
{
    _type = type;
}

Weapon::~Weapon()
{

}

const std::string& Weapon::getType()
{
    std::string &Ref = _type;
    return(Ref);
}

void Weapon::setType(std::string type)
{
    _type = type;
}