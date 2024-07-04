
#include "Harl.hpp"
#include "iostream"

Harl::Harl()
{
    PtrF[0] = &Harl::debug;
    PtrF[1] = &Harl::info;
    PtrF[2] = &Harl::warning;
    PtrF[3] = &Harl::error;
}
Harl::~Harl()
{

}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
    std::string array[4] = {"DEBUG","INFO","WARNING","ERROR"};
    int i = 0;
    while(level != array[i] && i != 4)
        i++;
    while(i != 4)
    {
        (this->*PtrF[i])();
        return;
    }
    
}