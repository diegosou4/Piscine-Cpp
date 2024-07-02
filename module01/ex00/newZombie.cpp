
#include "Zombie.h"

Zombie* newZombie(std::string name)
{
    Zombie* myZombie = new Zombie(name);
    return(myZombie);
}