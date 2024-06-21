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
    void getColumn();
    void setId(int id);
};






#endif