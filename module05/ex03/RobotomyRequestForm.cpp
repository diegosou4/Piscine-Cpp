#include "RobotomyRequestForm.hpp"
#include <bits/stdc++.h>


RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "Default destructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm",72,45), _target("Default")
{
    // std::cout << "Default constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm",72,45),_target(target)
{

}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm("RobotomyRequestForm",72,45)
{
    //  std::cout << "Robot copy constructor called" << std::endl;
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    // std::cout << "Roboto assignment operator called" << std::endl;
     if (this != &other)
        _target = other._target;
    return (*this);
}

void RobotomyRequestForm::beExecute() const
{
    static int i = 0;
    if(i == 0)
    {
        srand(time(NULL));
        i++;
    }
    if(rand() % 2 == 0)
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << _target << " has been failed to robotomized" << std::endl;
}