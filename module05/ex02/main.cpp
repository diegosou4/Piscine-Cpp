#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"

int main()
{
    try
    {
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
        Bureaucrat b("Bureaucrat", 149);
        Form f("Form", 1, 150);
        b.decrement();
        b.decrement();
        b.signForm(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}