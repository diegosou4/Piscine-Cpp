/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:12:47 by diegmore          #+#    #+#             */
/*   Updated: 2024/06/27 16:13:24 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

Contact::Contact()
{
}

Contact::~Contact()
{
}


void Contact::setId(int id)
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
  
    return(fieldcorrect);
}

void Contact::getColumn( int index)
{
    std::cout << std::right << std::setw(10) << (7 - index) << "|";
    std::cout << std::right << std::setw(10) << formatfield(_firstname) << "|";
    std::cout << std::right << std::setw(10) << formatfield(_lastname)  << "|";
    std::cout << std::right << std::setw(10) << formatfield(_nickname) << "|";
    std::cout << std::endl;
}

std::string givemecontent(std::string field)
{
    std::string content;

 
    std::cout << "Phonebook--->" + field + ":";
    while(content.empty())
    {
        std::getline(std::cin,content);
    }  
    return(content);
}
std::string Contact::getName()
{
    return(this->_firstname);
}

void Contact::setValues()
{ 
    std::cout << "\033[2J\033[1;1H";
    this->_firstname = givemecontent("First Name");
    this->_lastname = givemecontent("Last Name");
    this->_nickname = givemecontent("Nick Name");
    this->_number = givemecontent("Number");
    this->_number = givemecontent("Darkset");
    std::cout << "\033[2J\033[1;1H";
    std::cout << "Thanks for use Phonebook!!" << std::endl;
}
