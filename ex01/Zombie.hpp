
#ifndef _Zombie_hpp_
#define _Zombie_hpp_

# include <string>
# include <iostream>

class Weapon {
private:
	std::string	name;
public:
	void		announce ();
	Weapon();
	Weapon(std::string new_zombie_name );
	~Weapon(void );
	void RenameZombie( std::string new_zombie_name );
};

Weapon*	newZombie(std::string new_zombie_name );
void	randomChump( std::string new_zombie_name );
Weapon* zombieHorde(int N, std::string new_zombie_name );

#endif