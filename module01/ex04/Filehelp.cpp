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
bool create_temp(std::string file, std::ofstream &temp)
{
    std::string replace;
    replace = file + ".replace";
    temp.open(replace.c_str());
    if(!temp.is_open())
    {
        std::cout << "Error when we tried to create file temp" << std::endl;
        return(false);
    }
    return(true);
}

bool open_file(std::ifstream &myfile, std::string &file)
{
    myfile.open(file.c_str());

    if(!myfile.is_open())
    {  
        std::cout << "Error when we tried to open: " << file << std::endl;
        return(false);
    }
    if(myfile.peek() == std::ifstream::traits_type::eof())
    {
        std::cout << "Error: file is empty" << std::endl;
        myfile.close();
        return(false);
    }
    return(true);
}
   


int init_program(std::string file,std::string str1,std::string str2)
{
    std::ifstream myfile;
    std::ofstream temp;
    
    if(str1.empty())
    {
        std::cout << "Search string cannot be empty" << std::endl;
        return(0);
    }
    if(open_file(myfile,file) == false)
        return(0);
    if(create_temp(file,temp) == false)
    {
          myfile.close();
          return(0);
    }
    read_file(myfile,temp,str1,str2);
    temp.close();
    myfile.close();
    return(1);
}

