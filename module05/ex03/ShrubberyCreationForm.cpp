#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "Default destructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",145,137), _target("Default")
{
    // std::cout << "Default constructor Called" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm",145,137), _target(target)
{


}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm("ShrubberyCreationForm",145,137)
{
    //  std::cout << "Robot copy constructor called" << std::endl;
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    // std::cout << "Robot assignment operator called" << std::endl;
     if (this != &other)
        _target = other._target;
    return (*this);
}

const char *ShrubberyCreationForm::ShrubberyException::what() const throw()
{
    return ("Error opening file");
}


void ShrubberyCreationForm::beExecute() const
{
    
    std::ofstream file;
    file.open((this->getName() + "_shrubbery").c_str());
    if(!file.is_open())
    {
        throw ShrubberyException();
    }
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣤⡾⠋⠷⣤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⡆⣠⡰⡞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⢿⠏⣿⠗⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⣤⣘⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⡿⠁⢉⣟⠛⢷⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣟⣹⠉⠀⠈⣿⣌⡏⠀⢈⣹⣿                " << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⣿⡥⢤⣆⣀⣵⣄⣑⣦⢬⣽⡷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣾⣁⣬⣽⣶⠿⢋⡬⣍⠀⠻⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣜⣿⠟⠛⠉⢉⣅⠀⠀⢸⣢⣸⠇⠀⠈⢽⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⡩⡓⠁⠀⠈⣯⣈⡟⠀⠀⠀⠀⠀⠀⠀⠀⠉⣽⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡟⠟⣀⣠⠀⢉⡀⠁⢀⠀⠀⡀⠀⢠⣀⠈⢻⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢉⡿⠹⠷⠒⡿⠤⡖⠋⠓⠦⠽⠗⠺⠏⢻⡍⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⢠⣀⣠⢾⢷⣶⣤⣄⣀⣀⣀⣀⣀⣀⣀⣤⣴⣶⡾⠿⣦⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⢈⣿⢆⠅⠀⢀⣉⣉⠓⠛⠛⠛⠓⠒⡏⠉⠉⠀⠀⠀⠰⣿⡃⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⣤⡴⠞⠕⠁⠀⠀⢺⣿⣿⠆⠀⠀⠀⠐⡞⡙⡖⠀⠀⠀⠀⠀⠈⠛⠦⣤⡄⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠈⢛⣶⠞⢀⡀⠀⢀⠉⠁⠀⠀⠀⢀⠀⠋⠉⠃⠀⡀⠀⠀⣀⠘⢶⡞⠛⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⣤⡿⠻⠿⠒⠚⠿⠴⠖⣯⠤⠔⠋⠳⣤⣼⡖⠦⠽⠓⠒⠾⠿⠻⣇⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⢰⣞⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣻⡀⠀⠀⣠⠾⢧⠀⠀⠈⠙⢓⣶⠀⠀⠀⠀" << std::endl;
    file << "⢠⡴⠶⠚⠋⠋⠁⠀⠀⠀⠀⠀⣴⠛⣦⠄⠀⠀⠀⣀⣀⠀⢻⣧⠀⠀⠻⣤⡼⠁⠀⠀⠀⠀⠉⠛⠲⢶⣤" << std::endl;
    file << "⠀⠙⠓⢷⡶⠂⠀⠀⠀⠀⠀⠀⠸⠒⠗⠀⠀⠀⢸⡁⢈⡇⠈⢿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⢲⣖⠖⠛⠁" << std::endl;
    file << "⠀⠀⠀⠾⠷⣶⣏⣀⣀⣤⠆⠀⡀⠀⠀⠀⢠⠀⢀⣩⡉⠀⣄⠀⠻⣷⣄⡀⠀⢦⣄⣀⣘⣷⣶⠿⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠉⠉⠉⠙⠛⠛⣿⣥⣤⠴⠾⠿⢾⡿⢿⣿⣷⠾⠗⢶⢬⣿⣿⠛⠚⠋⠉⠉⠉⠁⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠁⠀⠙⣿⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠒⠒⠒⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file.close();
}