#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

void MateriaSource::learnMateria(AMateria *m)
{
    for(int index = 0; index < 4; index++)
    {
        if (_materia[index] == NULL)
        {
            _materia[index] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{

    for(int i = 0;i < 4; i++)
    {
        if (_materia[i] != NULL &&_materia[i]->getType() == type)
            return _materia[i]->clone();
    }
    return NULL;
}


MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        _materia[i] = NULL; 
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    for(int index = 0; index < 4; index++)
        _materia[index] = copy._materia[index];
    
    return *this;
}

MateriaSource::~MateriaSource()
{
    for(int index = 0; index < 4; index++)
    {
        if (_materia[index] != NULL)
            delete _materia[index];
    }
}
