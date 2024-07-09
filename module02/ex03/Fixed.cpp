#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <bitset>
#include <ostream>

const int Fixed::_fbits = 8;

Fixed::Fixed() : _pfixed(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &copy)
{
    //  std::cout << "Copy constructor called"  << std::endl;
    *this = copy;
}

Fixed &Fixed::operator = (const Fixed &src)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if(this != &src)
        this->_pfixed = src.getRawBits();
    return *this;
}


int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return _pfixed;
}

void Fixed::setRawBits(int const raw)
{
    _pfixed = raw;
}

Fixed::Fixed(const int value)
{
    _pfixed = value << _fbits;
}
Fixed::Fixed(const float floatValue) 
{
    _pfixed =  roundf(floatValue * (1 << _fbits)) ;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(_pfixed) / (1 << _fbits);
}


int Fixed::toInt(void) const {
    return _pfixed >> _fbits;
}

// Comparison Operators

bool Fixed::operator>(const Fixed& other) const
{
    return(this->toInt() > other.toInt()) ? true : false;
}

bool Fixed::operator<(const Fixed& other) const
{
    return(this->toInt() < other.toInt()) ? true : false;
}

bool Fixed::operator>=(const Fixed& other) const
{
    return(this->toInt() >= other.toInt()) ? true : false;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return(this->toInt() <= other.toInt()) ? true : false;
}

bool Fixed::operator==(const Fixed& other) const
{
    return(this->toInt() == other.toInt()) ? true : false;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return(this->toInt() != other.toInt()) ? true : false;
}

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed temp(*this);

    temp._pfixed += other._pfixed;
    return(temp);
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed temp(*this);
    
    temp._pfixed = roundf((this->toFloat() - other.toFloat()) * (1 << _fbits)) ;
    return(temp);
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed temp(*this);
 
    temp._pfixed = roundf((this->toFloat() * other.toFloat()) * (1 << _fbits)) ;
    return(temp);
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed temp(*this);
 
    temp._pfixed = roundf((this->toFloat() / other.toFloat()) * (1 << _fbits)) ;
    return(temp);
}

Fixed Fixed::operator++(int)
{
  Fixed temp(*this);
  this->_pfixed++;
  return temp;
}

Fixed& Fixed::operator++() {
    this->_pfixed++;
    return *this;
}


Fixed Fixed::operator--(int)
{
  Fixed temp(*this);
  this->_pfixed--;
  return temp;
}

Fixed& Fixed::operator--() {
    this->_pfixed--;
    return *this;
}


const Fixed& Fixed::min(const Fixed& first, const Fixed& second) {
    return (first.toFloat() < second.toFloat()) ? first : second;
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second) {
    return (first.toFloat() > second.toFloat()) ? first : second;
}

Fixed& Fixed::min(Fixed& first, Fixed& second) {
    return (first.toFloat() < second.toFloat()) ? first : second;
}

Fixed& Fixed::max(Fixed& first,  Fixed& second) {
    return (first.toFloat() > second.toFloat()) ? first : second;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}