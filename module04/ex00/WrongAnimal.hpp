#ifndef WRONGANIMAL
#define WRONGANIMAL

#include <string>

class WrongAnimal
{
    protected:
    std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);    
        WrongAnimal &operator=(const WrongAnimal &copy);
        std::string getType() const;
        void makeSound() const;
};

#endif