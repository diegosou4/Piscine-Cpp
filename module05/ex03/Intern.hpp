#ifndef INTERN_HPP
#define INTERN_HPP


#include "AForm.hpp"

class AForm;

class Intern
{
    private:

    public:
    ~Intern();
    Intern();
    Intern &operator=(Intern const &other);

    AForm* makeForm(std::string object, std::string target);
    class InvalidForm : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return "Intern can`t create this form";
            }
    };

};


#endif