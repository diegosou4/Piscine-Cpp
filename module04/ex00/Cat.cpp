#include "Cat.hpp"
#include <iostream>
#include "Animal.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if(this != &copy)
        type = copy.type;
        
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}