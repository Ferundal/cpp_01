#include "Zombie.hpp"

#include <iostream>
#include "Zombie.hpp"

int	main()
{
	int		zombieAmnt = 10;
	std::string	zombeyName = "Mark";
	Zombie *zHorde = zombieHorde(zombieAmnt, zombeyName);
	while (zombieAmnt-- > 0)
		zHorde[zombieAmnt].announce();
	delete [] zHorde;
}
