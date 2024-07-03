#include "replace.h"


#include <fstream> 


void read_file(std::ifstream &myfile, std::ofstream &temp, std::string str1,std::string str2)
{
    std::string line;


    while(getline(myfile,line))
    {
        size_t index = line.find(str1);
        if (index != std::string::npos)
        {
        std::cout << "Encontrou uma ocorrencia naquela linha no index " << line.find(str1) << std::endl;
        }
    }

}

int init_program(std::string file,std::string str1,std::string str2)
{
    std::ifstream myfile;
    std::ofstream temp;
    
    myfile.open(file.c_str());

    if(!myfile.is_open())
    {  
        std::cout << "Error when we tried to open: " << file << std::endl;
        return(0);
    }

    temp.open("temp");
    if(!temp.is_open())
    {
        std::cout << "Error when we tried to create file temp" << std::endl;
        myfile.close();
        return(0);
    }
    read_file(myfile,temp,str1,str2);


    temp.close();
    myfile.close();

    return(1);
}

