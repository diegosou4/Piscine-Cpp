#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal()
{
   
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
    _brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
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
    {
        delete _brain;
        _brain = new Brain(*copy._brain);
        type = copy.type;
     }   
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
}

void Dog::setIdea(std::string ideia, int index)
{
    _brain->setIdea(ideia,index);
}

std::string Dog::getIdea(int index)
{
    return(_brain->getIdea(index));
}