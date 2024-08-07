
#include "Harl.hpp"
#include "iostream"

Harl::Harl()
{

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

static void notsure ( void )
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
} 

static void cstatus( std:: string status)
{
    std::cout << status << std::endl;
}

void Harl::complain(std::string level)
{
    std::string array[4] = {"DEBUG","INFO","WARNING","ERROR"};
    int i = 0;
    while(level != array[i] && i != 4)
        i++;
 
     switch (i)
    {
        case 0:
            cstatus("[ DEBUG ]");
            this->debug();
            // Fall through
        case 1:
            cstatus("[ INFO ]");
            this->info();
            // Fall through
        case 2:
            cstatus("[ WARNING ]");
            this->warning();
            // Fall through
        case 3:
            cstatus("[ ERROR ]");
            this->error();
            break;
        default:
            notsure();
            break;
    }
}