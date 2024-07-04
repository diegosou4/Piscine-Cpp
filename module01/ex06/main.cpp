#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl myharl;

    if(ac == 2)
    {
        myharl.complain(av[1]);
    }


    return(0);
}