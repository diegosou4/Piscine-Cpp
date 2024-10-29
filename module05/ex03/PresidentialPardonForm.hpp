#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP  


#include "AForm.hpp"
#include <iostream>
#include <ostream>


class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
    public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &other);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
    void beExecute() const;
};

#endif