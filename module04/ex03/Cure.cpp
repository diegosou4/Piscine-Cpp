#include "Cure.hpp"
#include "AMateria.hpp"

#include <iostream>


Cure::Cure() : AMateria()
{
    std::cout << "Cure Default constructor called" << std::endl;
}

Cure::~Cure() 
{
    std::cout << "Cure Default desctuctor called" << std::endl;
}

Cure::Cure(std::string const & type) : AMateria(type)
{    
}

Cure::Cure(const Cure &copy) 
{
    *this = copy;
}

Cure &Cure::operator=(const Cure &copy)
{
    std::cout << "Cure assignment operator called" << std::endl;
    if(this != &copy)
        _type = copy._type;
    
    return(*this);
}