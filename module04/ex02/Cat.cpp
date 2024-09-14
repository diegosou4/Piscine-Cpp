#include "Cat.hpp"
#include <iostream>
#include "Animal.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
    _brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
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
    {
        _brain = new Brain(*copy._brain);
        type = copy.type;
    }
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}

void Cat::setIdea(std::string ideia, int index)
{
    _brain->setIdea(ideia,index);
}

std::string Cat::getIdea(int index)
{
    return(_brain->getIdea(index));
}