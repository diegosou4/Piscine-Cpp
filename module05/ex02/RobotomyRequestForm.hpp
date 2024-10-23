#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"


class RobotmyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        ~RobotmyRequestForm();
        RobotmyRequestForm();
        RobotmyRequestForm(std::string target);
        RobotmyRequestForm(RobotmyRequestForm const &other);
        RobotmyRequestForm &operator=(RobotmyRequestForm const &other);
}



#endif  