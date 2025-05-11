#include "Bureaucrat.hpp"
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* rrf;

    try{
        rrf = someRandomIntern.makeForm("shrubbery resquest", "Bender");
        delete rrf;
       
    }catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return 1;
    }


    
    return 0;
}