
#include "PersonInfo.hpp"
#include "PhoneBook.hpp"

void printmenu()
{
    std::cout << "Phonebook - Menu" << std::endl;
    std::cout << "Choose one option" << std::endl;
    std::cout << "[1] - ADD" << std::endl;
    std::cout << "[2] - SEARCH" << std::endl;
    std::cout << "[3] - EXIT" << std::endl;
}

int dooption(int option,int index,Phonebook *phone)
{
    if(option == 1)
    {
        phone->addContact();
        return(1);
    }
    else if(option == 2)
    {
        phone->printTable();
        return(0);
    }
    return(0);
}

int main(int ac,char **av)
{
    Phonebook* phone;
    int index = 0;
    int option = 0;

    phone = new Phonebook(7);
    std::cout << "Welcome to Phone Book" << std::endl;
    
    while(option != 3)
    {
        printmenu();
        std::cin >> option;
        index += dooption(option,index,phone);
    }

    return(0);
    


}