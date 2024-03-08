#include "Character.hpp"

Character::Character(std::string newName, int newHealthPoints, Weapon newWeapon)
{
	this->name = newName;
	this->healthPoints = newHealthPoints;
	this->weapon = newWeapon;
}

void Character::ShowCharacter()
{
	std::cout << "[" << this->name << "]:" << std::endl;
	this->weapon.showStats();
}