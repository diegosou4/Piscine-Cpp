#include "PresidentialPardonForm.hpp"

#include <iostream>



PresidentialPardonForm::~PresidentialPardonForm()
{
    // std::cout << "Default Destructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon",25,5), _target("Default")
{
    //  std::cout << "Default Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :  AForm("PresidentialPardon",25,5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : AForm("PresidentialPardon",25,5)
{
    //  std::cout << "Presidential copy constructor called" << std::endl;
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
    // std::cout << "Presidential assignment operator called" << std::endl;
     if (this != &other)
        _target = other._target;
    return (*this);
}

void PresidentialPardonForm::beExecute() const
{
    std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

