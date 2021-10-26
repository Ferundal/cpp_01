#ifndef _Karen_hpp_
#define _Karen_hpp_

# include <string>
# include <iostream>

class Karen {
private:
	static std::string		levels[];
	void					(Karen::*functions[4])(void);
	void					debug( void );
	void					info( void );
	void					warning( void );
	void					error( void );
public:
							Karen();
	void					complain( std::string level );
};

#endif