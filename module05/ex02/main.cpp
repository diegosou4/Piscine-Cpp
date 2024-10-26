#include "Bureaucrat.hpp"
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
   

  

    // ==================== PresidentialPardonForm ====================
        PresidentialPardonForm form1 = PresidentialPardonForm("Form1");
        Bureaucrat b = Bureaucrat("Bureaucrat", 1);
        b.signForm(form1);
        b.executeForm(form1);

    // ==================== ShrubberyCreationForm ====================
        ShrubberyCreationForm form3 = ShrubberyCreationForm("Form3");
        Bureaucrat b1 = Bureaucrat("Bureaucrat1", 135);
        b1.signForm(form3);
        b1.executeForm(form3);
    // ==================== RobotomyRequestForm ====================
        RobotomyRequestForm form2 = RobotomyRequestForm("Form2");
        Bureaucrat b2 = Bureaucrat("Bureaucrat2", 44);
        b2.signForm(form2);
        b2.executeForm(form2);
    // ==================== RobotomyRequestForm ====================
        RobotomyRequestForm form4 = RobotomyRequestForm("Form4");
        Bureaucrat b3 = Bureaucrat("Bureaucrat3", 72);
        b3.signForm(form4);
        b3.executeForm(form4);
    return 0;
}