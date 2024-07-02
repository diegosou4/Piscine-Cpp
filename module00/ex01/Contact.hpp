/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <diegmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:13:48 by diegmore          #+#    #+#             */
/*   Updated: 2024/07/02 11:51:20 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip> 

class Contact
{
private:
    int _id;
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _number;
    std::string _darkset;
    
public:
    Contact();
    ~Contact();
    void setValues(bool isfull);
    std::string getName();
    void getColumn(int index);
    void setId(int id);
    void getFullColumn(int index);
};






#endif
