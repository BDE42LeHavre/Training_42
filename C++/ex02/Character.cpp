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

//	Voici une fonction qui accepte une reference (&) a un objet `Character`.
//	Ecrire : `void Character::Attack(Character other)` (sans le &)
//	va creer une nouvelle instance de l'objet.
//	Il sera donc possible de la modifier sans modifier l'objet a l'exterieur de la fonction.
//	Alors qu'ecrire : `void Character::Attack(Character &other)` (avec le &),
//	va pointer vers la meme adresse que l'objet en question.
//	L'objet qui sera modifie dans cette fonction le sera donc aussi a l'exterieur !
void Character::Attack(Character &other)
{
	if (this->healthPoints <= 0)
		return ;
	std::cout << this->name << " attacks " << other.getName() << " with its " << this->weapon.getName() << "!" << std::endl;
	other.TakeDamages(this->weapon.getDamages());
}

void Character::TakeDamages(int damages)
{
	this->healthPoints -= damages;
	if (this->healthPoints <= 0)
		std::cout << "\033[38;2;255;50;50m" << this->name << " takes " << damages << " damages and dies.\033[0m" << std::endl;
	else
		std::cout << "\033[0;31m" << this->name << " takes " << damages << " damages!\033[0m" << std::endl;
}