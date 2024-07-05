#ifndef FIXED_HPP
#define FIXED_HPP


class Fixed
{
    private:
    int _pfixed;
    static const int _fbits;
    public:
    Fixed();
    Fixed(const Fixed &copy); // Copy Default Constructor
    Fixed &operator = (const Fixed &    src); // Assignment Operator constructor
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};



#endif