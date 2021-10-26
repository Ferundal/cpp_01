#include <iostream>
#include "../ex05/Karen.hpp"

int	levelToInt(char *str) {
	if (strcmp(str, "DEBUG") == 0)
		return (1);
	if (strcmp(str, "INFO") == 0)
		return (2);
	if (strcmp(str, "WARNING") == 0)
		return (3);
	if (strcmp(str, "ERROR") == 0)
		return (4);
	return (-1);
}

int	main(int argc, char **argv) {
	if (argc != 2)
		return (-1);
	Karen karen;
	switch (levelToInt(argv[1])) {
		case 1:
			std::cout << "[DEBUG]" << std::endl;
			karen.complain("DEBUG");
			std::cout << std::endl;
		case 2:
			std::cout << "[INFO]" << std::endl;
			karen.complain("INFO");
			std::cout << std::endl;
		case 3:
			std::cout << "[WARNING]" << std::endl ;
			karen.complain("WARNING");
			std::cout << std::endl;
		case 4:
			std::cout << "[ERROR]" << std::endl;
			karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
