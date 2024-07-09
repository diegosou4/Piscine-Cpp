#ifndef FIXED_HPP
#define FIXED_HPP
#include <ostream>

class Fixed {
private:
    int                 _pfixed;
    static const int    _fbits;
public:
    Fixed();
    Fixed(const int intValue);
    Fixed(const float floatValue);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits( void ) const;
    void setRawBits(int const raw);
    // Operator
   
    // Comparison Operators
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
    
    // Arithmetic operation
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
    // Increment / Decrement
    Fixed operator++(int);
    Fixed& operator++();
    Fixed operator--(int);
    Fixed& operator--();
    // Funcoes estaticas
    // Podem ser chamadas mesmo que o objeto nao tenha sido criado
    static const Fixed& min(const Fixed& first, const Fixed& second);
    static const Fixed& max(const Fixed& first, const Fixed& second);

    static Fixed& min(Fixed& first, Fixed& second);
    static Fixed& max( Fixed& first, Fixed& second);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);


#endif