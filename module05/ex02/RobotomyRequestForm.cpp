#include "RobotomyRequestForm.hpp"

RobotmyRequestForm::~RobotmyRequestForm()
{
    std::cout << "Default destructor Called" << std::endl;
}

RobotmyRequestForm::RobotmyRequestForm() : AForm("RobotomyRequestForm",72,45), _target("Default")
{
    std::cout << "Default constructor Called" << std::endl;
}

RobotmyRequestForm::RobotmyRequestForm(std::string target) : AForm("RobotomyRequestForm",72,45),_target(target)
{

}


RobotmyRequestForm::RobotmyRequestForm(RobotmyRequestForm const &other) : AForm("RobotmyRequestForm",72,45)
{
     std::cout << "Robot copy constructor called" << std::endl;
    *this = other;
}

RobotmyRequestForm &RobotmyRequestForm::operator=(RobotmyRequestForm const &other)
{
    std::cout << "Robot assignment operator called" << std::endl;
     if (this != &other)
        _target = other._target;
    return (*this);
}
