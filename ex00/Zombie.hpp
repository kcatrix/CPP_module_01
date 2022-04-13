#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>

class	Zombie
{
	public :
	void	announce( void );
	Zombie	*newZombie( std::string name );
	void	randomChump( std::string name );

	Zombie( void );
	~Zombie( void );

	private :
	std::string _name;
};

#endif
