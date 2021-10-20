#include "Zombie.hpp"

void Weapon::announce () {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Weapon::Weapon() {

}

Weapon::Weapon(std::string new_zombie_name) {
	name = new_zombie_name;
}

void Weapon::RenameZombie(std::string new_zombie_name ) {
	name = new_zombie_name;
}

Weapon::~Weapon() {
	std::cout << name << ": Oh nooo... I am dead again..." << std::endl;
}