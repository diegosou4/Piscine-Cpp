#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <ostream>
#include <exception>

class Bureaucrat;

class AForm{
    private:
        const std::string  _name;
        const int _gradeToSign;
        const int _gradeToExecute;
        bool _signed;
    public:
        AForm();
        ~AForm();
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        AForm(AForm const &other);
        AForm &operator=(AForm const &other);
        void beSigned(Bureaucrat &bureaucrat);
        int getGradeToSign() const;
        int getGradeToExecute() const;
        const std::string getName() const;
        bool getSigned() const;
        virtual void beExecute() const = 0;
        void execute(Bureaucrat const & executor) const;
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

std::ostream& operator<<( std::ostream& os, const AForm& obj );








#endif