
#include "Zombie.h"

int main()
{
    Zombie* myZombie;

    myZombie = newZombie("Diego");
    myZombie->announce();

    randomChump("Renato");
    delete myZombie;
    return(0);
}