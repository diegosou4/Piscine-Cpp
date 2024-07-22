
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource : public IMateriaSource
{
    protected:
    public:
    void learnMateria(AMateria *);
    AMateria* createMateria(std::string const & type);

};




#endif