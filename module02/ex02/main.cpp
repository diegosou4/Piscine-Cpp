
#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
    // Fixed a(5.6f);

    // Fixed c(22);
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    //  std::cout << "Value b: " << b << std::endl;
    // std::cout << "Value c: " << c.toFloat() << std::endl;
    // std::cout << "Value a: " << a.toFloat() << std::endl;
    // std::cout << "Bigger than: " <<(b > a) << std::endl;
    // std::cout << "Small Than: " << (b < a) << std::endl;
    // std::cout << "Diferrent: " << (b != a) << std::endl;
    // std::cout << "Equal: " << (b == a) << std::endl;
    // std::cout << "Bigger than or Equal: " <<(b >= a) << std::endl;
    // std::cout << "Small Than or Equal: " << (b <= a) << std::endl;


    // Fixed const g( Fixed( 5.05f ) + Fixed( 2 ) );
    // std::cout << "Value g: " << g << std::endl;
    // Fixed d(0);

    // std::cout << "Value d: " << d.toFloat() << std::endl;
    // std::cout << "Value d: " << d++ << std::endl;
    // Fixed e(0);
    // std::cout << "Value e: " << e << std::endl;
    // std::cout << "Value e: " << ++e << std::endl;
    // std::cout << "Value e: " << e << std::endl;
    
    // std::cout << (a > b) << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::min( a, b ) << std::endl;

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}