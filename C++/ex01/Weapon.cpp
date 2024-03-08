#include "Weapon.hpp"

Weapon::Weapon(std::string newName, int newDamages)
{

}

void Weapon::showStats()
{
	std::cout << "Weapon name: " << this->weaponName << std::endl;
	std::cout << "Damages: " << this->damages << std::endl;
}