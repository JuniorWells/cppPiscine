#include "Fixed.hpp"

Fixed::Fixed(void): _n(0){
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int x){
	//std::cout << "Int constructor called" << std::endl;
	this->_n = x * (1 << this->_bits);
	//std::cout << "Constructor of integer to Fixed point n: " << this->_n << std::endl; 
}

Fixed::Fixed(const float x) {
	//std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(x * (1 << this->_bits));
	//std::cout << "Constructor of float to Fixed point n: " << this->_n << std::endl;
}

Fixed::Fixed(Fixed const & src){
	//std::cout << "Copy constructor called" << std::endl;
	// this->_n = src.getRawBits();
	*this = src;
}

Fixed::~Fixed(){
	//std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const& src){
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_n = src.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const{

	return this->_n;
}

float	Fixed::toFloat(void) const{
	return ((float)this->getRawBits() / (float)(1 << this->_bits));
}

int		Fixed::toInt(void) const{
	return (this->getRawBits() / (1 << this->_bits));
}

void	Fixed::setRawBits(int const raw){
	this->_n = raw;
}

bool	Fixed::operator>(Fixed const & other) const{
	return (this->_n > other.getRawBits());
}
bool	Fixed::operator<(Fixed const & other) const{
	return (this->_n < other.getRawBits());
}

bool	Fixed::operator>=(Fixed const & other) const{
	return (this->_n >= other.getRawBits());
}

bool	Fixed::operator<=(Fixed const & other) const{
	return (this->_n <= other.getRawBits());
}

bool	Fixed::operator==(Fixed const & other) const{
	return (this->_n == other.getRawBits());
}

bool	Fixed::operator!=(Fixed const & other) const{
	return (this->_n != other.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & other) const {
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & other) const {
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & other) const {
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & other) const {
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed&	Fixed::operator++(void){
	this->_n++;
	return (*this);	
}

Fixed&	Fixed::operator--(void){
	this->_n--;
	return (*this);
}

Fixed	Fixed::operator++(int){
	Fixed ret = *this;
	++*this;
	return (ret);
}

Fixed	Fixed::operator--(int){
	Fixed ret = *this;
	--*this;
	return (ret);
}


Fixed& 		Fixed::min(Fixed & one, Fixed & other){
	return (one > other ? other : one);
}
const Fixed&	Fixed::min(Fixed const & one, Fixed const & other){
	return (one > other ? other : one);
}

Fixed&		Fixed::max(Fixed & one, Fixed & other){
	return (one > other ? one : other);
}

const Fixed&	Fixed::max(Fixed const & one, Fixed const & other){
	return (one > other ? one : other);
}

std::ostream&	operator<<(std::ostream & o, Fixed const &obj){
	return (o << obj.toFloat());
}

const int	Fixed::_bits = 8;