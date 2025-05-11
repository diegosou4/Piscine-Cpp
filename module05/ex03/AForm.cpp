#include "AForm.hpp"
#include <iostream>
#include <ostream>

AForm::AForm() : _name("default"), _gradeToSign(150), _gradeToExecute(150)
{
    _signed = false;
}


AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) 
{
    _signed = false;
    if(gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if(gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    //  std::cout << "Form copy constructor called" << std::endl;
    *this = other;
}

AForm &AForm::operator=(AForm const &other)
{
    // std::cout << "Form assignment operator called" << std::endl;
    if (this != &other)
        _signed = other._signed;
    return (*this);
}


int AForm::getGradeToSign() const
{
    return (_gradeToSign);
}

int AForm::getGradeToExecute() const
{
    return (_gradeToExecute);
}

const std::string AForm::getName() const
{
    return (_name);
}

bool AForm::getSigned() const
{
    return (_signed);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeToSign)
        _signed = true;
    else
        throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Form: Grade is too high");
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Form: Grade is too low");
}

void AForm::execute(Bureaucrat const & executor) const
{
    if(!this->getSigned())
        throw AForm::GradeTooLowException();
    else if(executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
        this->beExecute();

}

std::ostream &operator<<(std::ostream &os, const AForm &obj)
{
    os << "Name: "<< obj.getName() << std::endl << "Signed: " << obj.getSigned() << std::endl \
	<< "Sign Grade: " << obj.getGradeToSign() << std::endl << "Required Grade: " << obj.getGradeToExecute() << std::endl;
    return (os);
}

