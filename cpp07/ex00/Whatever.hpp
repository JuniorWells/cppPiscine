#include <iostream>

template < typename T >
void	swap(T & t, T & u) {
	T	temp;
	temp = t;
	t = u;
	u = temp;
}

template < typename T >
T	min(T& t, T& u) {
	return (t < u ? t : u);
}

template < typename T >
T	max(T& t, T& u) {
	return (t > u ? t : u);
}

//std::ostream&	operator<<(std::stream & o, T const & r) {
//	return (o << T);
//}
