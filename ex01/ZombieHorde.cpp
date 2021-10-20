#include "Zombie.hpp"

Weapon* zombieHorde(int N, std::string new_zombie_name ) {
	if (N < 1)
		return (NULL);
	Weapon *zombieArrPtr;
	zombieArrPtr = new Weapon[N];
	while (N-- > 0)
		zombieArrPtr[N].RenameZombie(new_zombie_name);
	return (zombieArrPtr);
}