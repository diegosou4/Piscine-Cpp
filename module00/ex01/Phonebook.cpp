
#include "PhoneBook.hpp"


Phonebook::~Phonebook(){

}

Phonebook::Phonebook(int index){
    this->_index  = index;
    this->_isfull = false;
}

void Phonebook::addContact()
{
    if(_index >= 0)
    {
        _person[_index].setValues(_isfull);
        _index -= 1;
    }
    if(_index < 0)
    {
        _isfull = true;
        _index = 7;
    }
}
void Phonebook::getindex()
{
    std::cout << _index << std::endl;
}
void Phonebook::printFcontact()
{
    std::string option;
    
    getTable();
    std::cout << "Enter the ID you are looking for:" << std::endl;
    getline(std::cin,option);
    if (std::cin.eof() && option.size() != 1)
    {
        std::cout << "Error" << std::endl;
        return;
    }  
    int index = (int)option[0] - 48;
    if(index >= 0 && index <= 7)
    {
        index = 7 - index;
        if(!_person[index].getName().empty())
        {
              _person[index].getFullColumn(index);
        }
        else
            std::cout << "Id not found" << std::endl;
        return;
    }
    std::cout << "Id not found" << std::endl;
}

void Phonebook::getTable()
{
    std::cout << "\033[2J\033[1;1H";
    std::cout << std::right << std::setw(10) << "index" << "|";
    std::cout << std::right << std::setw(10) << "first name" << "|";
    std::cout << std::right << std::setw(10) << "last name" << "|";
    std::cout << std::right << std::setw(10) << "nickname" << "|" << std::endl;
    for(int i = 7;i >= 0;i--)
    {
        if(!_person[i].getName().empty())
        {
             _person[i].getColumn(i);
        }
    }
}
