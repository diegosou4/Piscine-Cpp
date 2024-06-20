#ifndef PERSONINFO_HPP
#define PERSONINFO_HPP

#include <string>
#include <iostream>

class PersonInfo
{
private:
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _number;
    std::string _darkset;
    
public:
    PersonInfo();
    ~PersonInfo();
    void setValues();
    void getName();
};






#endif