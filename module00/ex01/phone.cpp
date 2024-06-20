
#include "PersonInfo.hpp"

int main(int ac,char **av)
{

    PersonInfo* person;

    person = new PersonInfo();

    person->setValues();

    person->getName();

    delete person;
    return(0);
    


}