
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "PersonInfo.hpp"
#include <iostream>
#include <string>




class Phonebook{
    private:
    int _index;
    public:
    Phonebook(){};
    ~Phonebook(){};
    Phonebook(int index){
        this->_index  = index;
    };
    PersonInfo person[8];
    void getindex();
    void printTable();
    void addContact();
};


void Phonebook::addContact()
{
    std::cout << "passa aqui";
    std::cout << _index << std::endl;
    if(_index >= 0)
    {
        person[_index].setValues();
        _index -= 1;
    }
    if(_index < 0)
        _index = 7;


}
void Phonebook::getindex()
{
    std::cout << _index << std::endl;
}
void Phonebook::printTable()
{
    std::cout << "\033[2J\033[1;1H";
    std::cout << std::right << std::setw(10) << "index" << "|";
    std::cout << std::right << std::setw(10) << "first name" << "|";
    std::cout << std::right << std::setw(10) << "last name" << "|";
    std::cout << std::right << std::setw(10) << "nickname" << "|" << std::endl;
    for(int i = 0;i < 8;i++)
    {
        if(!person[i].getName().empty())
        {
             person[i].getColumn(i);
        }
    }
}
#endif