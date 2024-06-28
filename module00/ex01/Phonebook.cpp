
#include "PhoneBook.hpp"


Phonebook::~Phonebook(){

}

Phonebook::Phonebook(int index){
    this->_index  = index;
    this->_isfull = false;
}


void Phonebook::addContact()
{
    if(_index >= 0)
    {
        if(_isfull == true)
            std::cout << "Agenda cheia vamos apagar seu contato mais antigo" << std::endl;
        _person[_index].setValues();
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
    std::string option;
    std::cout << "\033[2J\033[1;1H";
    std::cout << std::right << std::setw(10) << "index" << "|";
    std::cout << std::right << std::setw(10) << "first name" << "|";
    std::cout << std::right << std::setw(10) << "last name" << "|";
    std::cout << std::right << std::setw(10) << "nickname" << "|" << std::endl;
    for(int i = 7;i >= 0;i--)
    {
        if(!_person[i].getName().empty())
        {
             _person[i].getColumn(i);
        }
    }
    std::cout << "Informe o id do contato que voce quer ver" << std::endl;
    getline(std::cin,option);
    if (std::cin.eof() && option.size() != 1)
    {
        std::cout << "Error" << std::endl;
        return;
    }  
    int index = option[0];
    if(index >= 0 && index <= 7)
    {
        if(_person[index].getName().empty())
        {
            _person[index].getFullColumn(index);
        }else{
            std::cout << "Id nao encontrado" << std::endl;
        }
    }
}