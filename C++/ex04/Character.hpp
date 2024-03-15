#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Weapon.hpp"

class Character
{
	/*
		Les fonctions et variables `protected` se comportent comme en `private`,
		a la difference que les classes qui heritent de la classe `Character`
		y ont acces comme en `public`.
	*/
	protected:
		std::string name;
		int healthPoints;

	private:
		Weapon weapon;
		bool isDefending;
		
	public:
		Character() {}
		Character(std::string newName, int newHealthPoints, Weapon newWeapon);
		~Character() {}
		Character &operator=(const Character &a);
		void ShowCharacter();
		void Attack(Character &other);
		void TakeDamages(int damages);
		void setWeapon(Weapon &weapon) {this->weapon = weapon;}
		int getHealthPoints() {return this->healthPoints;}
		std::string getName() {return this->name;}
		Weapon &getWeapon() {return (this->weapon);}
		void setDefend(bool isDef) {this->isDefending = isDef;}
		bool getDefend() {return this->isDefending;}

		bool isGoblin;
};

#endif