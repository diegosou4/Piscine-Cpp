/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <diegmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:12:47 by diegmore          #+#    #+#             */
/*   Updated: 2024/07/02 11:28:52 by diegmore         ###   ########.fr       */
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
    return(field);
}

void Contact::getColumn( int index)
{
    std::cout << std::right << std::setw(10) << (7 - index) << "|";
    std::cout << std::right << std::setw(10) << formatfield(_firstname) << "|";
    std::cout << std::right << std::setw(10) << formatfield(_lastname)  << "|";
    std::cout << std::right << std::setw(10) << formatfield(_nickname) << "|";
    std::cout << std::endl;
}

void Contact::getFullColumn(int index)
{
    std::cout << "\033[2J\033[1;1H";
    std::cout << "Index: " <<  (7 - index) << std::endl;
    std::cout << "First Name: " << _firstname << std::endl;
    std::cout << "Last Name: " << _lastname << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Number: "  << _number << std::endl;
    std::cout << "Darkset :" << _darkset << std::endl;
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
    for (size_t pos = content.find('\t'); pos != std::string::npos; pos = content.find('\t', pos))
    {
    content.replace(pos, 1, " ");
    pos += 1;
    }  
    return(content);
}
std::string Contact::getName()
{
    return(this->_firstname);
}


// Return sting npos if have char, npos represent a const invalid position
static bool has_only_digits(const std::string s) 
{
    return s.find_first_not_of("0123456789") == std::string::npos;
}

void Contact::setValues(bool isfull)
{ 
    std::cout << "\033[2J\033[1;1H";
    if(isfull == true)
        std::cout << "Phonebook is full we will delete your oldest contact" << std::endl;
    this->_firstname = givemecontent("First Name");
    this->_lastname = givemecontent("Last Name");
    this->_nickname = givemecontent("Nick Name");
    this->_number = givemecontent("Number");
    while(has_only_digits(_number) == false)
    {
        std::cout << "The number of contact it might have Numbers" << std::endl;
        this->_number = givemecontent("Number");
    }
    this->_darkset = givemecontent("Darkset");
    std::cout << "\033[2J\033[1;1H";
    std::cout << "Thanks for use Phonebook!!" << std::endl;
}
