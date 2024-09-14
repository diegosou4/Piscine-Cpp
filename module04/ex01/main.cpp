

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"
#include <iostream>


// Aqui podemos ver um grande problema quando nao usamos polimorfismo
// O animal nao consegue exergar os outro atributos que  




int main()
{
    Animal* Mu540 = new Animal();
    
    Dog* Carlao = new Dog();
    std::cout << "-----------------------------" << std::endl;
    Carlao->setIdea("Au au au morder carteiro",0);
    std::cout << "-----------------------------" << std::endl;
    std::cout << Carlao->getIdea(0) << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << Carlao->getIdea(1) << std::endl;


    std::cout << "-----------------------------" << std::endl;
    Dog* Carlao2 = new Dog(*Carlao);
    std::cout << "Atualizando valor da ideia do Carlao" << std::endl;
    Carlao->setIdea("Au au au au Mimir", 0);
    std::cout << "-----------------------------" << std::endl;
    std::cout << Carlao2->getIdea(0) << std::endl;
    std::cout << "-----------------------------" << std::endl;

    delete Carlao2;
    delete Carlao;
    delete Mu540;
    return 0;
    
}