#include <iostream>
#include "../ex06/Karen.hpp"

int	main() {
	{
		Karen karen;
		karen.complain("DEBUG");
		karen.complain("INFO");
		karen.complain("WARNING");
		karen.complain("ERROR");
		karen.complain("LOL");
	}
}
