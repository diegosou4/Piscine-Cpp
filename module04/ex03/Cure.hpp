#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <string>

class Cure : public AMateria
{
    protected:

    public:
    Cure();
    Cure(std::string const & type);
    Cure(const Cure &copy);
    Cure &operator=(const Cure &copy);
    ~Cure();
    
}
;

#endif