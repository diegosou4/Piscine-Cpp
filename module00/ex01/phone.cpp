
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

void dooption(int option,Phonebook *phone)
{
    switch (option)
    {
    case 1:
        phone->addContact();
    break;
    case 2:
        phone->printTable();
    break;
    case 3:
        std::cout << "Thanks for use Phone Book! Good bye ;)" << std::endl;
    break;
    default:
        std::cout << "\033[2J\033[1;1H";
        std::cout << "Wrong option please choose a correct option" << std::endl;
        break;
    }
}

int main(void)
{
    Phonebook* phone;
    int option = 0;

    phone = new Phonebook(7);
    std::cout << "Welcome to Phone Book" << std::endl;
    
    while(option != 3)
    {
        printmenu();
        std::cin >> option;
        dooption(option,phone);
    }
    delete phone;
    return(0);
}