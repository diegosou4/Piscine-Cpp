#include "Point.hpp"
#include <iostream>


Point::Point() : _x(0) , _y(0)
{

}

Point::~Point()
{

}

Point::Point(const Point& copy) : _x(copy._x), _y(copy._y)
{
    
}

Point &Point::operator=(const Point& src)
{
    if (this != &src)
        std::cout << "You cannot assign a new value to a constant variable" << std::endl;
    return *this;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{

}

float Point::get_x() const
{
    return _x.toFloat();
}

float Point::get_y() const
{
    return _y.toFloat();
}