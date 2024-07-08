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
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};



#endif