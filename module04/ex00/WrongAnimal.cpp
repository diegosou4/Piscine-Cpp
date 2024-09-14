#include "WrongAnimal.hpp"

#include <iostream>
#include <string>

WrongAnimal::~WrongAnimal()
{
      std::cout << "Wrong Animal destrutor called" << std::endl;
}

WrongAnimal::WrongAnimal() 
{
    std::cout << "Wrong Animal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
     std::cout << "Wrong Animal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
     std::cout << "Wrong Animal assignment operator called" << std::endl;
    if(this != &copy)
        type = copy.type;
    return(*this);
}

std::string WrongAnimal::getType() const
{
    return(type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "(in silence)" << std::endl;
}