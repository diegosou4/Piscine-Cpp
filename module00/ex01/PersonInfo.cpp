
#include "PersonInfo.hpp"

PersonInfo::PersonInfo()
{
    
}

PersonInfo::~PersonInfo()
{
}


void PersonInfo::setId(int id)
{
    this->_id = id;
}

void PersonInfo::getColumn()
{
    std::cout << this->_firstname << "|" << std::setw(10);
    std::cout << this->_lastname  << "|" << std::setw(10);
    std::cout << this->_nickname  << "|" << std::setw(10);
    std::cout << std::endl;
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
std::string PersonInfo::getName()
{
    // std::cout << "\033[2J\033[1;1H";
    return(this->_firstname);
}

void PersonInfo::setValues()
{ 
    std::cout << "\033[2J\033[1;1H";
    std::cin.clear();
    this->_firstname = givemecontent("First Name");
    this->_lastname = givemecontent("Last Name");
    this->_nickname = givemecontent("Nick Name");
    this->_number = givemecontent("Number");
    this->_number = givemecontent("Darkset");
    std::cout << "Thanks for use Phonebook!!" << std::endl;
}