

#include <string>
#include <iostream>


// Toda refencia deve ser inicalizada em sua criacao
// Ela ocupa o mesmo espaco da memoria que a phrase
// A refencia nao pode ser Nula
// A ideia e usar referencia para evitar criar mais
// Enderecos na memoria, ou seja sem fazer copia
// Ponteiros podem receber valores a qualquer momento


int main(void)
{
    std::string phrase = "HI THIS BRAIN";

    std::string *stringPTR = &phrase;
    std::string &stringREF = phrase;
    
    std::cout << "Address of the string variable: " << &phrase << std::endl;
    std::cout << "Address of the stringPTR: " << &stringPTR << std::endl;
    std::cout << "Address of the stringREF: " << &stringREF << std::endl;

    std::cout << "The value of the string variable: " << phrase << std::endl;
    std::cout << "The value of the stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value of the stringREF: " << stringREF << std::endl;
    
    return(0);
}