#include "Zombie.hpp"

Zombie* newZombie( std::string new_zombie_name ) {
	return (new Zombie(new_zombie_name));
}
