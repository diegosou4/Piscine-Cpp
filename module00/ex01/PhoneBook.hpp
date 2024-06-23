
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "PersonInfo.hpp"
#include <iostream>
#include <string>




class Phonebook{
    private:
    public:
    Phonebook(){};
    ~Phonebook(){};
    PersonInfo person[8];
    void printTable();
};

void Phonebook::printTable()
{
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