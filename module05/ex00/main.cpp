#include "Bureaucrat.hpp"
#include <iostream>


int main()
{
    try{
        Bureaucrat b1("b1", 1);
        std::cout << b1;
    }   catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try{
        Bureaucrat b2("b2", 150);
        std::cout << b2;
    }   catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try{
        Bureaucrat b3("b3", 151);
        std::cout << b3;
    }   catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}