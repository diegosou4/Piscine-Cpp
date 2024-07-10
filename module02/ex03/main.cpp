

#include "Point.hpp"
#include "iostream"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point p1(0, 0);
    Point p2(10, 30);
    Point p3(20, 0);


    Point check(5,5);


   bool variavel =  bsp(p1, p2, p3, check);

   if(variavel == true)
   {
    std::cout << true << std::endl;
    std::cout << "O ponto está dentro do triângulo" << std::endl;
   }else
    {
    std::cout << "O ponto está fora do triângulo" << std::endl;
    }
    return 0;
}