
#ifndef _Zombie_hpp_
#define _Zombie_hpp_

# include <string>
# include <iostream>

class Zombie {
private:
	std::string	name;
public:
	void		announce ();
	Zombie( std::string new_zombie_name );
	~Zombie( void );
};

Zombie*	newZombie( std::string new_zombie_name );
void	randomChump( std::string new_zombie_name );

#endif