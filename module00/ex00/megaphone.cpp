/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <diegmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:35:59 by diegmore          #+#    #+#             */
/*   Updated: 2024/06/20 11:42:37 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
void print_all(int ac,char **av)
{
    for(int rest = 1;rest != ac;rest++)
    {
        if(rest != ac && rest != 1)
            std::cout << " ";
        to_Uppercase(av[rest]);
    }
}

int print_empty(void)
{
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return(0);
}

int main(int ac,char **av)
{
    if(ac == 1)
        return(print_empty());   
    else
      print_all(ac,av);
    std::cout <<  std::endl;
    return(0);
}



