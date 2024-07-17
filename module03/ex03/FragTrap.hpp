#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public virtual ClapTrap
{
    protected:
        static const int _hp = 100;
        static const int _at = 30;
    public:
        FragTrap();
       
        FragTrap(std::string name);
        FragTrap(const FragTrap &obj);
        FragTrap &operator=(const FragTrap &obj);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif