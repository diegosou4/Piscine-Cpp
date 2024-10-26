#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP
#include <string>
#include <iostream>
#include <ostream>
#include <exception> 

#include "AForm.hpp"

class AForm;

class Bureaucrat
{
protected:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name , int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    const std::string& getName() const;
    int getGrade() const;
    void increment();
    void decrement();
    void signForm(AForm& form);
    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() const throw();
    };
    void executeForm(AForm const & form);    
};

std::ostream& operator<<( std::ostream& os, const Bureaucrat& obj );




#endif