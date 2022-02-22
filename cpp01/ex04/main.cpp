#include <iostream>
#include <fstream>
#include <string>
#include <strstream>

int		main(int argc, char **argv) {
	
	if (argc != 4) {
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}

	std::ifstream file(argv[1]);
	std::string temp = argv[1];

	if (file.good()) {
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::ofstream ofile(temp + ".replace");
		std::size_t found;

		if (!ofile.good())
			return (1);

		if (s1.empty()){
			while (std::getline(file, temp)) {
				ofile << temp << std::endl;
			}
		}
		else {
			while (std::getline(file, temp)) {
				while ((found = temp.find(s1)) != std::string::npos) {
					temp.erase(found, s1.length());
					temp.insert(found, s2);
				}
				ofile << temp << std::endl;
			}
		}
		ofile.close();

		} else {
			std::cout << "Input file failure" << std::endl;
			return (1);
	}
	file.close();
	return (0);
}
