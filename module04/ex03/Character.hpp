#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>


class Character : public ICharacter
{
    protected:
    std::string _name;
    AMateria *_materia[4];
    public:
    Character();
    Character(const Character &copy);
    Character &operator=(const Character &copy);
    Character(std::string name);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria * m);
    void unequip(int idx);
    void Character::use(int idx, ICharacter &target);
};



#endif