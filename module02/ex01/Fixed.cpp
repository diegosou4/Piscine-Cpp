#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <bitset>
#include <ostream>

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

Fixed::Fixed(const int value)
{
    // std::cout << "Original integer: " << value << std::endl;
    // std::cout << "Original (shifted): " << std::bitset<32>(value) << std::endl;
    _pfixed = value << _fbits;
    // std::cout << "Shifted value: " << _pfixed << std::endl;
    // std::cout << "Binary (shifted): " << std::bitset<32>(_pfixed) << std::endl;
}
Fixed::Fixed(const float floatValue) {
    // std::cout << "Original float: " << floatValue << std::endl;
    // std::cout << "Scaled value (before rounding): " << (floatValue * (1 << _fbits)) << std::endl;
    _pfixed =  roundf(floatValue * (1 << _fbits)) ;
    // std::cout << "Scaled and rounded value: " << _pfixed << std::endl;
    // std::cout << "Binary (scaled and rounded): " << std::bitset<32>(_pfixed) << std::endl;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(_pfixed) / (1 << _fbits);
}


int Fixed::toInt(void) const {
    return _pfixed >> _fbits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}