#include "Bureaucrat.hpp"
#include <iostream>


int main()
{
    try{
        std::cout << "-------------------------" << std::endl;
        Bureaucrat b1("b1", 0);
        std::cout << b1;
    }   catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try{
        std::cout << "-------------------------" << std::endl;
        Bureaucrat b2("b2", 150);
        std::cout << b2.getName() << std::endl;
        std::cout << b2.getGrade() << std::endl;
        std::cout << "---------Decrement-------------" << std::endl;
        b2.decrement();
        b2.decrement();
        b2.decrement();
        std::cout << b2;
    }   catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try{
        std::cout << "-------------------------" << std::endl;
        Bureaucrat b3("b3", 151);
        std::cout << b3;
    }   catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}