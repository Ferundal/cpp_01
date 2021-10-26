#include "Zombie.hpp"

void Zombie::announce () {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string new_zombie_name ) {
	name = new_zombie_name;
}

Zombie::~Zombie() {
	std::cout << name << ": Oh nooo... I am dead again..." << std::endl;
}