#include <iostream>

char	*toUpper(char *s)
{
	int	i = 0;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	while (--argc)
		std::cout << toUpper(*++argv);
	std::cout << std::endl;
	return (0);
}
