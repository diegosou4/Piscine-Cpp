#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"

#include "Animal.hpp"
#include <string>

class Dog : public Animal
{
    private:
    Brain *_brain;
    public:
    Dog();
    ~Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &copy);
    void makeSound() const;

    void setIdea(std::string ideia,int index);
    std::string getIdea(int index);
};

#endif