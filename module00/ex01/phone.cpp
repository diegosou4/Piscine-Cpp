/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <diegmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:35:24 by diegmore          #+#    #+#             */
/*   Updated: 2024/08/13 12:09:53 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

void printmenu()
{
    std::cout << "Phonebook - Menu" << std::endl;
    std::cout << "Choose one option" << std::endl;
    std::cout << "1 - ADD" << std::endl;
    std::cout << "2 - SEARCH" << std::endl;
    std::cout << "3 - EXIT" << std::endl;
}

void dooption(std::string input,Phonebook *phone)
{
    if (input == "ADD")
        phone->addContact();
    else if (input == "SEARCH") 
        phone->printFcontact();        
    else if (input == "EXIT") 
    std::cout << "Thanks for using Phone Book! Good bye ;)" << std::endl;
    else 
    std::cout << "Wrong option. Please choose a correct option:" << std::endl;
}

int main(void)
{
    Phonebook phone = Phonebook(7); 

    std::cout << "Welcome to Phone Book" << std::endl;
    
    std::string input;
    while(1)
    {
        printmenu();
        getline(std::cin, input);
        if (std::cin.eof())
            break;
        dooption(input,&phone);
        if(input == "EXIT" || input == "3")
            break;
    }
    return(0);
}
