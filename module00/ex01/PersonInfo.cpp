
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
    this->_firstname = givemecontent("Name");
}