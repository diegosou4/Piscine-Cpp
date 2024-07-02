/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <diegmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:35:42 by diegmore          #+#    #+#             */
/*   Updated: 2024/07/02 09:58:30 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cctype>


class Phonebook{
    private:
    int _index;
    bool _isfull;
    Contact _person[8];
    public:
    ~Phonebook();
    Phonebook(int index);
    void getindex();
    void printFcontact();
    void addContact();
    void getTable();
};


#endif
