
#include "PersonInfo.hpp"

PersonInfo::PersonInfo()
{
}

PersonInfo::~PersonInfo()
{
}

std::string givemecontent(std::string field)
{
    std::string content;

    while(content.empty())
    {
        std::cout << "Phonebook--->" + field + ":";
        std::cin >> content;
    }
    return(content);

}
void PersonInfo::getName()
{
    std::cout << this->_firstname << std::endl;

}
void PersonInfo::setValues()
{ 
    std::cin.clear();
    this->_firstname = givemecontent("First Name");
    this->_lastname = givemecontent("Last Name");
    this->_nickname = givemecontent("Nick Name");
    this->_number = givemecontent("Number");
    this->_number = givemecontent("Darkset");
    std::cout << "Thanks for use Phonebook!!" << std::endl;
}