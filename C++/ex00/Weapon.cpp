#include "Weapon.hpp"

Weapon::Weapon()
{
	this->damages = 10;
	this->weaponName = "Sword";
}

Weapon::~Weapon()
{
	
}

void Weapon::showStats()
{
	std::cout << "Weapon name: " << this->weaponName << std::endl;
	std::cout << "Damages: " << this->damages << std::endl;
}