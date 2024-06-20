#include <iostream>


void to_Uppercase(char *string)
{
    for(int i = 0; string[i] != '\0';i++)
    {   
        char result = string[i];
        if(string[i] >= 97 && string[i] <= 122)
            result -= 32;
        std::cout << result;    
    }
}


int main(int ac,char **av)
{
    int i;
    i = 1;

    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }else{
        for(int rest = 1;rest != ac;rest++)
        {
              if(rest != ac && rest != 1)
                std::cout << " ";
            to_Uppercase(av[rest]);
        }
    }
    std::cout <<  std::endl;

    return(0);
}



