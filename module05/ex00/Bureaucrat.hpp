#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP
#include <string>
#include <iostream>
#include <ostream>
#include <exception> 

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name , int grade);
    ~Bureaucrat();
    const std::string& getName() const;
    int getGrade() const;
    void increment();
    void decrement();
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
};

std::ostream& operator<<( std::ostream& os, const Bureaucrat& obj );




#endif