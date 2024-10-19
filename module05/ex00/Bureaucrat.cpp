#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <ostream>
#include <exception>

Bureaucrat::Bureaucrat() : _name("") , _grade(0)
{

}


Bureaucrat::Bureaucrat(std::string name , int grade) : _name(name) , _grade(grade)
{
    std::cout << "Default Constructor called" << std::endl;
    if(grade > 150)
        throw GradeTooLowException();
    else if(grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

void Bureaucrat::increment()
{
    _grade--;
}

void Bureaucrat::decrement()
{
    _grade++;
}

const std::string& Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return(_grade);
}  

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade is too low");
}

std::ostream& operator<<( std::ostream& os, const Bureaucrat& obj ) 
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return os;
}
