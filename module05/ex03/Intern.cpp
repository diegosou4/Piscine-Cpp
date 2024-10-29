#include "Intern.hpp"

#include <iostream>

Intern::Intern()
{
    std::cout << "Default Constructor Called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Default Destructor Called" << std::endl;
}

Intern::&AForm makeForm(std::string object, std::string target)
{
    Aform myform;

    std::string myojbects[3] = {"robotmy request", "shrubbery resquest", "presidential request"};
    int i = 0;


    while(myojbects[i] != object)
        i++;
    switch(i)
    {
        case 0: 
            myform = RobotomyRequestForm(target);
        break;
        case 1:
            myform = ShrubberyCreationForm(target);
        break;
        case 2:
            myform = PresidentialPardonForm(target);
        default: 
            myform = NULL;
    }
    return(myform);
}