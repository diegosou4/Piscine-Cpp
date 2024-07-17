

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();


    const Animal* wa = new WrongCat();

    std::cout << wa->getType() << " " << std::endl;

    wa->makeSound();

    delete wa;
    delete i;
    delete j;
    delete meta;
    return 0;
    
}