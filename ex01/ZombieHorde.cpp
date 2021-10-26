#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string new_zombie_name ) {
	if (N < 1)
		return (NULL);
	Zombie *zombieArrPtr;
	zombieArrPtr = new Zombie[N];
	while (N-- > 0)
		zombieArrPtr[N].RenameZombie(new_zombie_name);
	return (zombieArrPtr);
}