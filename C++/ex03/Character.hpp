#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Weapon.hpp"

class Character
{
	private:
		int healthPoints;
		std::string name;
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
};

#endif