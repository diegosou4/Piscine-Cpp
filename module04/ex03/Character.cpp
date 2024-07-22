#include "Character.hpp"

#include <string>
#include "AMateria.hpp"



std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    for(int index = 0; index < 4; index++)
    {
        if (_materia[index]->getType().empty() == true)
        {
            _materia[index] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 4)
    {
        delete _materia[idx];
        _materia[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 4)
        _materia[idx]->use(target);
}