#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	private:
		int damages;
		std::string weaponName;
		void showStats(void);

	public:
		Weapon() {}
		Weapon(std::string newName, int newDamages);
		~Weapon() {}
};

#endif