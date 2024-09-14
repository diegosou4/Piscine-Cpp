
#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    Ice *digin = new Ice();

    Ice *digin2 = new Ice(*digin);

   std::cout << digin2->getType() << std::endl;

    std::cout << "-----------------------------------" << std::endl;
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete digin2;
    delete digin;
    delete bob;
    delete me;
    delete src;
    return 0;
}