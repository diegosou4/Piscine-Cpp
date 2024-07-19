#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destrutor called" << std::endl;
}


Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if(this != &copy)
        type = copy.type;
        
    return(*this);
}

std::string Animal::getType() const
{
    return(type);
}

