#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"

int main()
{
    try
    {
        std::cout << "-------------------------" << std::endl;
        Bureaucrat b("Bureaucrat", 1);
        Form f("Form", 1, 150);
        b.signForm(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "-------------------------" << std::endl;
        Bureaucrat b("Bureaucrat", 10);
        Form f("Form", 1, 130);
        b.decrement();
        b.signForm(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "-------------------------" << std::endl;
        Bureaucrat c("Bureaucrat", 40);
        Form f1("Form", 60, 130);
        c.decrement();
        c.signForm(f1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}