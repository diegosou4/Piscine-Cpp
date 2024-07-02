

#include "Zombie.h"


int main()
{
    Zombie *horde;

    horde = zombieHorder(3,"Diego");
    horde[0].announce() ;
    horde[1].setName("Renato");
    horde[1].announce();
    horde[2].setName("Rodrigo");
    horde[2].announce();

    delete []horde;

    return(0);
}