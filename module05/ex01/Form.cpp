#include "Form.hpp"
#include <iostream>
#include <ostream>

Form::Form() : _name("default"), _gradeToSign(150), _gradeToExecute(150), _signed(false)
{
    
}
Form::~Form()
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute),  _signed(false)
{
    if(gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if(gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
     std::cout << "Form copy constructor called" << std::endl;
    *this = other;
}

Form &Form::operator=(Form const &other)
{
    std::cout << "Form assignment operator called" << std::endl;
    if (this != &other)
        _signed = other._signed;
    return (*this);
}


int Form::getGradeToSign() const
{
    return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (_gradeToExecute);
}

const std::string Form::getName() const
{
    return (_name);
}

bool Form::getSigned() const
{
    return (_signed);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeToSign)
        _signed = true;
    else
        throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Form: Grade is too high");
}
const char *Form::GradeTooLowException::what() const throw()
{
    return ("Form: Grade is too low");
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
    os << "Name: "<< obj.getName() << std::endl << "Signed: " << obj.getSigned() << std::endl \
	<< "Sign Grade: " << obj.getGradeToSign() << std::endl << "Required Grade: " << obj.getGradeToExecute() << std::endl;
    return (os);
}