#include "Weapon.hpp"

Weapon::Weapon(std::string newName, int newDamages)
{
	this->damages = newDamages;
	this->weaponName = newName;
}

Weapon::~Weapon()
{
	
}

void Weapon::showStats()
{
	std::cout << "Weapon name: " << this->weaponName << std::endl;
	std::cout << "Damages: " << this->damages << std::endl;
}

/*
	Le contenu du constructeur de la classe Weapon etait vide,
	il fallait donc remplir cette fonction en indiquant les nouvelles valeurs aux attributs.

	A noter que :
	
		Weapon::Weapon(std::string newName, int newDamages)
		{
			this->damages = newDamages;
			this->weaponName = newName;
		}

	Peut aussi s'ecrire :

		Weapon::Weapon(std::string newName, int newDamages) : weaponName(newName), damages(newDamages) {}
*/