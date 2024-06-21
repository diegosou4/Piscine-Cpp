
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


int main(int ac,char **av)
{
    Phonebook* phone;

    phone = new Phonebook;
    std::cout << "Welcome to Phone Book" << std::endl;
    printmenu();
    return(0);
    


}