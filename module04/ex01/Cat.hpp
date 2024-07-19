#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
    private:
    Brain *_brain;
    public:
    Cat();
    ~Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &copy);
    void makeSound() const;

    void setIdea(std::string ideia,int index);
    std::string getIdea(int index);
};

#endif