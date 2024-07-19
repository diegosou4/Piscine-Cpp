#include "WrongCat.hpp"
#include <iostream>



WrongCat::WrongCat()
{
    type = "Wrongcat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Default destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : Animal(copy)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = copy;
}
WrongCat &WrongCat::operator=(const WrongCat &copy)
{
   std::cout << "Dog assignment operator called" << std::endl;
    if(this != &copy)
        type = copy.type;
        
    return(*this);
}

