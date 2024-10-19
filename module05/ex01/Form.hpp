#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <ostream>
#include <exception>

class Bureaucrat;

class Form{
    private:
        const std::string  _name;
        bool _signed;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        Form();
        ~Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(Form const &other);
        Form &operator=(Form const &other);
        void beSigned(Bureaucrat &bureaucrat);
        int getGradeToSign() const;
        int getGradeToExecute() const;
        const std::string getName() const;
        bool getSigned() const;
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

std::ostream& operator<<( std::ostream& os, const Form& obj );








#endif