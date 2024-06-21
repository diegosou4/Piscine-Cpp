
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
    int option = 0;
    int i = 0;
    phone = new Phonebook;
    std::cout << "Welcome to Phone Book" << std::endl;
    while(option != 3)
    {
         printmenu();
         std::cin >> option;
         switch (option)
         {
             std::cout << "\033[2J\033[1;1H";
         case 1:
         {
            phone->person[i].setValues();
            i++;
            break;
         }
        case 2:
        {
            phone->printTable();
            break;
        }
         default:
            break;
         }
       
    }
    std::cout << "Se you Next time!" << std::endl;
    delete phone;
    return(0);
    


}