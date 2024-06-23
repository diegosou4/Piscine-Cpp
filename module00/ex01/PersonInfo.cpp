
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
std::string formatfield(std::string field)
{
    std::string fieldcorrect;
    if(field.size() > 10)
    {
        fieldcorrect = field.substr(0,9) + ".";
        return(fieldcorrect);
    }
    return(field);
    
}

void PersonInfo::getColumn( int index)
{
    std::cout << std::right << std::setw(10) << index << "|";
    std::cout << std::right << std::setw(10) << formatfield(_firstname) << "|";
    std::cout << std::right << std::setw(10) << formatfield(_lastname)  << "|";
    std::cout << std::right << std::setw(10) << formatfield(_nickname) << "|";
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