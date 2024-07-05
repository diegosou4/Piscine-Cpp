#include "Fixed.hpp"

#include "iostream"

const int Fixed::_fbits = 8;

Fixed::Fixed() : _pfixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &copy)
{
     std::cout << "Copy constructor called"  << std::endl;
    *this = copy;
}

Fixed &Fixed::operator = (const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &src)
        this->_pfixed = src.getRawBits();
    return *this;
}


int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _pfixed;
}

void Fixed::setRawBits(int const raw)
{
    _pfixed = raw;
}