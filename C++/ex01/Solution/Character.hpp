#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Weapon.hpp"

class Character
{
	private:
		int healthPoints;
		std::string name;
		
	public:
		Character() {}
		Character(std::string newName, int newHealthPoints, Weapon newWeapon);
		~Character() {}
		Weapon weapon;
		void ShowCharacter();
};

#endif

/*
	La fonction membre `ShowCharacter()` etait en `prive`, elle n'etait donc pas accessible a l'exterieur de la classe.
	Il fallait donc la mettre en `public`.
*/