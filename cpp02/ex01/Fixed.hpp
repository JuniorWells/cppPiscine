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
	private:
		int	_n;
		static const int _bits;
};

std::ostream&	operator<<(std::ostream & o, Fixed const &num);

#endif