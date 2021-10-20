#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &new_weapon) : weapon (new_weapon) {
	name = new_name;
}

HumanA::~HumanA( void ) {

}
void HumanA::SetWeapon(Weapon &new_weapon) {
	weapon = new_weapon;
}

void HumanA::attack() {
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}