#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if(this != &copy)
        type = copy.type;
        
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
}