

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
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    Dog *cachorro = new Dog();
    cachorro->setIdea("Morder o entregador as 12:00 auau",0);
    std::cout << cachorro->getIdea(0) << std::endl;
    Dog *outrocachorro = new Dog(*cachorro);
    outrocachorro->setIdea("Dormir ate as 4 da tarde auau",1);

    std::cout << outrocachorro->getIdea(1) << std::endl;
    std::cout << outrocachorro->getIdea(0) << std::endl;
    std::cout << cachorro->getIdea(1) << std::endl;
    
    delete outrocachorro;
    delete cachorro;
    delete meta;
    delete j;
    delete i;
    return 0;
    
}