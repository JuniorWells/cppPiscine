#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

bool	tooManyDots(std::string &s) {
	size_t	count = 0;
	for (size_t i = 0; i < s.size(); i++) {
		if (s[i] == '.')
			++count;
	}
	return (count <= 1 ? false : true);
}

bool	hasDigitsEtc(std::string &s) {
	int tooManySigns = 0;
	for (size_t i = 0; i < s.size(); i++) {
		if (s[i] == '-' || s[i] == '+')
			tooManySigns++;
		if ((s[i] < '0' || s[i] > '9') && (s[i] != '.') && (s[i] != '-') && (s[i] != '+'))
			return false;
	}
	if (tooManySigns > 1)
		return false;
	return true;
}


int		main(int argc, char **argv) {
	
	if (argc != 2) {
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}

	std::string	s = argv[1];
	bool		isInf = false;
	bool		isInff = false;
	bool		isNan = false;

	for (size_t i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);

	if (!s.compare(0, s.length(), "inf") || !s.compare(0, s.length(), "-inf") || !(s.compare(0, s.length(), "+inf")))
		isInf = true;
	if (!s.compare(0, s.length(), "inff") || !s.compare(0, s.length(), "-inff") || !(s.compare(0, s.length(), "+inff")))
		isInff = true;
	if (!isInf && (s[s.length() - 1] == 'f') && (s.length() > 1)) { s = s.substr(0, s.length() - 1); }
	if (s.at(s.length() - 1) == '.') { std::cout << "Invalid argument" << std::endl; return 1; }
	if (!s.compare(0, s.length(), "nan")) { isNan = true; }
	if ((!isInf && !isInff && !isNan && !hasDigitsEtc(s) && (s.length() > 3)) || tooManyDots(s)) { 
		std::cout << "Invalid argument" << std::endl;
		return 1;
	}

	long double value;
	//if (s.length() == 1 && (s.at(0) >= 'a') && (s.at(0) <= 'z')) { value = static_cast<int>(s.at(0));}
	if (s.length() == 3 && s.at(0) == '\'' && s.at(2) == '\'') {
		value = static_cast<int>(s.at(1));
	} else {
		std::istringstream input(s);
		input >> value;
	}

	if (!value && (s != "0" && s!= "'0'" && s != "0." && s != "0.0")) {
		std::cout << "Invalid argument" << std::endl;
		return 1;
	}

	std::cout << value << std::endl;

	if ((value < 32 && value >= 0) || (value > 127 && value < 256))
		std::cout << "Char: Non displayable" << std::endl;
	else if (isnan(value) || isinf(value) || value < CHAR_MIN || value > CHAR_MAX)
		std::cout << "Char: Impossible" << std::endl;
	else
		std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;

	std::cout << "Int: ";
	if (isnan(value) || isinf(value))
		std::cout << "Impossible" << std::endl;
	else if (value < INT32_MIN || value > INT32_MAX)
		std::cout << "Out of bounds" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;

	std::cout << "Float: ";
	if (isnan(value))
		std::cout << "nanf" << std::endl;
	else if (isinf(value))
		std::cout << INFINITY << std::endl;
	else if (value < -__FLT_MIN__ || value > __FLT_MAX__)
		std::cout << "Out of bounds" << std::endl;
	else
		std::cout << std::setprecision(1) << std::fixed << static_cast<float>(value) << "f" << std::endl;

	std::cout << "Double: ";
	if (isnan(value))
		std::cout << "nan" << std::endl;
	else if (isinf(value))
		std::cout << INFINITY << std::endl;
	else if (value < -__DBL_MIN__ || value > __DBL_MAX__)
		std::cout << "Out of bounds" << std::endl;
	else
		std::cout << static_cast<double>(value) << std::endl;

	return 0;
}