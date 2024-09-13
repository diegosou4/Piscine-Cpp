#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
    private:
    int _hp;
    int _at;
    static int _isconfigured;
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &obj);
        FragTrap &operator=(const FragTrap &obj);
        ~FragTrap();
        void highFivesGuys(void);
        int getHp(void);
        int getAt(void);
};

#endif