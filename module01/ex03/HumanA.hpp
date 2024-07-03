


#ifndef HUMANA_HPP
#define HUMANA_HPP


#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
    std::string _name; 
    Weapon &_my;
    public:
    HumanA(std::string name, Weapon &newweapon);
    ~HumanA();
    void attack();
};



#endif