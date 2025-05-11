#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern()
{
    std::cout << "Default Constructor Called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Default Destructor Called" << std::endl;
}

Intern &Intern::operator=(Intern const &other)
{
    std::cout << "Assignment operator called" << std::endl;
    return (*this);
}

AForm*Intern::makeForm(std::string object, std::string target)
{

    std::string myojbects[3] = {"robotomy request", "shrubbery resquest", "presidential request"};
    int i = 0;

    try{
        while(myojbects[i] != object && i < 3)
            i++;
        switch(i)
        {
            case 0: 
                std::cout << "Intern creates " << object << std::endl;
                return new RobotomyRequestForm(target);
            break;
            case 1:
                std::cout << "Intern creates " << object << std::endl;
                return new ShrubberyCreationForm(target);
            break;
            case 2:
                std::cout << "Intern creates " << object << std::endl;
                return new PresidentialPardonForm(target);
            default: 
                throw InvalidForm();

        }
    }catch ( std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return NULL;
    }

    return(NULL);
}