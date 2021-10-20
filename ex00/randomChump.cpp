#include "Zombie.hpp"

void randomChump( std::string new_zombie_name ) {
	Zombie *curr_zomb = newZombie (new_zombie_name);
	curr_zomb->announce();
	delete (curr_zomb);
}


