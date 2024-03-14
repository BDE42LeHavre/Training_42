#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	private:
		int damages;
		std::string weaponName;

	public:
		Weapon() {}
		Weapon(std::string newName, int newDamages);
		~Weapon() {}
		void showStats(void);
};

#endif

/*
	La fonction membre `showStats()` etait en prive. 
	Pour que la classe Character puisse l'appeler, il faut mettre cette fonction en public.
*/