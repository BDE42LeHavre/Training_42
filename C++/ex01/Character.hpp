#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Weapon.hpp"

class Character
{
	private:
		int healthPoints;
		std::string name;
		void ShowCharacter();
		
	public:
		Character() {}
		Character(std::string newName, int newHealthPoints, Weapon newWeapon);
		~Character() {}
		Weapon weapon;
};

#endif