#include "replace.h"


#include <fstream> 




void read_file(std::ifstream &myfile, std::ofstream &temp, const std::string &str1, const std::string &str2)
{
    std::string line;

    while (getline(myfile, line))
    {
        size_t index = 0;
        while ((index = line.find(str1, index)) != std::string::npos)
        {
            line.erase(index, str1.length());
            line.insert(index, str2);
            index += str2.length();
        }
        temp << line << std::endl;
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
    std::cout << "chega aqui " << std::endl;
    read_file(myfile,temp,str1,str2);


    temp.close();
    myfile.close();

    return(1);
}

