

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>


int main()
{
    Animal* mu540 = new Animal();
    Animal* Zezao = new Dog();
    Animal* Aurora = new Cat();
    std::cout << "-----------------------------" << std::endl;
    std::cout << mu540->getType() << " ";
    mu540->makeSound();
    std::cout << "-----------------------------" << std::endl;
    std::cout << Zezao->getType() << " ";
    Zezao->makeSound();
    std::cout << "-----------------------------" << std::endl;
    std::cout << Aurora->getType() << " ";
    Aurora->makeSound();
    std::cout << "-----------------------------" << std::endl;
    std::cout << "-----------------------------" << std::endl;

    Animal* Rodolfo = new WrongCat();
    std::cout << "-----------------------------" << std::endl;
    std::cout << Rodolfo->getType() << " " << std::endl;
    Rodolfo->makeSound();
    std::cout << "-----------------------------" << std::endl;
    delete mu540;
    delete Zezao;
    delete Aurora;
    delete Rodolfo;
    return 0;
    
}