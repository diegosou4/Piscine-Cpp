
#include "replace.h"

int main(int ac,char **av)
{
    if(ac == 4)
    {
      init_program(av[1],av[2],av[3]); 
    }else{
        std::cout << "Error: the correct call to progam (FILE) (STRING1) (STRING2)" << std::endl;
    }

    return(0);
}