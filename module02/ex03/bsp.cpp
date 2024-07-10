#include "Point.hpp"
#include "iostream"

float vetorialproduct(const Point& a, const Point& b, const Point& c)
{
    return (
            b.get_x() - a.get_x()) *
         (c.get_y() - a.get_y()) - 
            (b.get_y() - a.get_y()) * 
         (c.get_x() - a.get_x());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{   
    float cross1 = vetorialproduct(a, b, point);
    float cross2 = vetorialproduct(b, c, point);
    float cross3 = vetorialproduct(c, a, point);

    std::cout << "cross1: " << cross1 << std::endl;
    std::cout << "cross2: " << cross2 << std::endl;
    std::cout << "cross3: " << cross3 << std::endl;
    bool has_neg = (cross1 < 0) || (cross2 < 0) || (cross3 < 0);
    bool has_pos = (cross1 > 0) || (cross2 > 0) || (cross3 > 0);

    return !(has_neg && has_pos);
}