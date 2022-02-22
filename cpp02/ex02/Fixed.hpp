#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	public:
		Fixed();
		Fixed(const int x);
		Fixed(const float x);
		Fixed(Fixed const & src);

		Fixed&	operator=(Fixed const & src);
		~Fixed();

		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		bool	operator>(Fixed const & other) const;
		bool	operator<(Fixed const & other) const;
		bool	operator>=(Fixed const & other) const;
		bool	operator<=(Fixed const & other) const;
		bool	operator==(Fixed const & other) const;
		bool	operator!=(Fixed const & other) const;

		Fixed	operator+(Fixed const & other) const;
		Fixed	operator-(Fixed const & other) const;
		Fixed	operator*(Fixed const & other) const;
		Fixed	operator/(Fixed const & other) const;

		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed& 		min(Fixed & one, Fixed & other);
		static const Fixed&	min(Fixed const & one, Fixed const & other);
		static Fixed&		max(Fixed & one, Fixed & other);
		static const Fixed&	max(Fixed const & one, Fixed const & other);

	private:
		int	_n;
		static const int _bits;
};

std::ostream&	operator<<(std::ostream & o, Fixed const &num);

#endif