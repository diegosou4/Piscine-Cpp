#ifndef ZOMBIEHORDE_CPP
#define ZOMBIEHORDE_CPP

#include "Zombie.h"



Zombie* zombieHorder(int N, std::string name)
{
    Zombie *horde = new Zombie[N];
    for(int i = 0;i < N;i++)
        horde[i].setName(name);
    return(horde);
}

#endif