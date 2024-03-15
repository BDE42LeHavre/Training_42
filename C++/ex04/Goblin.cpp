#include "Goblin.hpp"

Goblin::Goblin(int newHealthPoints, Weapon newWeapon)
{
	this->name = "Goblin";
	this->healthPoints = newHealthPoints;
	newWeapon.setDamages(newWeapon.getDamages() / 5);
	this->setWeapon(newWeapon);
	this->isGoblin = true;
	std::cout << std::endl << ROSERED << "A weak goblin appears, holding a "
		<< this->getWeapon().getName() << "!" << RESET << std::endl;
}