#include "MateriaSource.cpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

void MateriaSource::learnMateria(AMateria *m)
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
    return new AMateria(type);
}