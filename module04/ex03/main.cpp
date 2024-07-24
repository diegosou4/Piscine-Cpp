
#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Cure());  

    ICharacter* me = new Character("Diego");

    AMateria* tmp;
    tmp = src->createMateria("Cure");
    me->equip(tmp);

    me->use(0, *me);

    delete me;
    delete src;
    return 0;
}