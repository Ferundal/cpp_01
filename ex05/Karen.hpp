
#ifndef _HumanA_hpp_
#define _HumanA_hpp_

# include <string>
# include <iostream>

class Karen {
private:
	static std::string		levels[];
	static void				((*functions[]))(void);
	void					debug( void );
	void					info( void );
	void					warning( void );
	void					error( void );
public:
	void complain( std::string level );
};

#endif