/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:35:42 by diegmore          #+#    #+#             */
/*   Updated: 2024/06/27 14:35:45 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "PersonInfo.hpp"
#include <iostream>
#include <string>

class Phonebook{
    private:
    int _index;
    bool _isfull;
    public:
    Phonebook(){};
    ~Phonebook(){};
    Phonebook(int index){
        this->_index  = index;
        this->_isfull = false;
    };
    PersonInfo person[8];
    void getindex();
    void printTable();
    void addContact();
};


void Phonebook::addContact()
{
    if(_index >= 0)
    {
        if(_isfull == true)
            std::cout << "Agenda cheia vamos apagar seu contato mais antigo" << std::endl;
        person[_index].setValues();
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
void Phonebook::printTable()
{
    std::cout << "\033[2J\033[1;1H";
    std::cout << std::right << std::setw(10) << "index" << "|";
    std::cout << std::right << std::setw(10) << "first name" << "|";
    std::cout << std::right << std::setw(10) << "last name" << "|";
    std::cout << std::right << std::setw(10) << "nickname" << "|" << std::endl;
    for(int i = 7;i >= 0;i--)
    {
        if(!person[i].getName().empty())
        {
             person[i].getColumn(i);
        }
    }
}
#endif
