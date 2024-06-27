/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PersonInfo.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:35:06 by diegmore          #+#    #+#             */
/*   Updated: 2024/06/27 14:35:07 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSONINFO_HPP
#define PERSONINFO_HPP

#include <string>
#include <iostream>
#include <iomanip> 

class PersonInfo
{
private:
    int _id;
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _number;
    std::string _darkset;
    
public:
    PersonInfo();
    ~PersonInfo();
    void setValues();
    std::string getName();
    void getColumn(int index);
    void setId(int id);
};






#endif
