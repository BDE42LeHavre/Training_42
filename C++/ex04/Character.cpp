#include "Character.hpp"

Character::Character(std::string newName, int newHealthPoints, Weapon newWeapon)
{
	this->name = newName;
	this->healthPoints = newHealthPoints;
	this->weapon = newWeapon;
	this->isGoblin = false;
}

Character &Character::operator=(const Character &a)
{
    if (this != &a)
	{
		this->healthPoints = a.healthPoints;
		this->name = a.name;
		this->weapon = a.weapon;
		this->isGoblin = a.isGoblin;
	}
    return *this;
}

void Character::ShowCharacter()
{
	std::cout << "[" << this->name << "]:" << std::endl;
	this->weapon.showStats();
}

//	Voici une operation ternaire :
//	`int dmg = other.getDefend() ? this->weapon.getDamages() / 2 : this->weapon.getDamages();`
//	Il s'agit d'une question, a laquelle on va apporter une reponse en cas de reussite et une
//	autre en cas d'echec.
//	On peut ecrire cette operation de cette facon, avec un `if...else` :

//		int dmg;
//		if (other.getDefend)
//			dmg = this->weapon.getDamages() / 2;
//		else
//			dmg = this->weapon.getDamages();

//	Ca fait beaucoup de lignes pour pas grand chose !
void Character::Attack(Character &other)
{
	if (this->healthPoints <= 0)
		return ;
	int dmg = other.getDefend() ? this->weapon.getDamages() / 2 : this->weapon.getDamages();
	other.TakeDamages(dmg);
}

void Character::TakeDamages(int damages)
{
	if (this->healthPoints - damages <= 0)
		this->healthPoints = 0;
	else
		this->healthPoints -= damages;
}
