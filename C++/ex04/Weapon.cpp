#include "Weapon.hpp"

Weapon::Weapon(std::string newName, int newDamages)
{
	this->damages = newDamages;
	this->weaponName = newName;
}

void Weapon::showStats()
{
	std::cout << "Weapon name: " << this->weaponName << std::endl;
	std::cout << "Damages: " << this->damages << std::endl;
}

void Weapon::UpgradeWeapon()
{
	std::cout << "\033[0;36mThe " << this->weaponName << " is now magically upgraded!\033[0m" << std::endl << std::endl;
	this->damages *= 5;
}