#include "iter.hpp"

int	main(){
	int	arr[] = { 1, 2, 3 };
	float	farr[] = { 4.2, 5.3, 6.4 };
	char	carr[] = { 'k', 'o', 's', };

	for (int i = 0; i < 3; i++)
		std::cout << "Int array before: " << arr[i] <<std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "Float array before: " << farr[i] <<std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "Char array before: " << carr[i] <<std::endl;

	std::cout << std::endl <<"######@@@######" << std::endl << std::endl;
	
	iter(arr, 3, foo);
	iter(farr, 3, foo);
	iter(carr, 3, foo);

	for (int i = 0; i < 3; i++)
		std::cout << "Int array after: " << arr[i] <<std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "Float array after: " << farr[i] <<std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "Char array after: " << carr[i] <<std::endl;

	return 0;
}
