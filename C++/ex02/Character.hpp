#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Weapon.hpp"

class Character
{
	private:
		int healthPoints;
		std::string name;
		Weapon weapon;
		
	public:
		Character() {}
		Character(std::string newName, int newHealthPoints, Weapon newWeapon);
		~Character() {}
		void ShowCharacter();
		void Attack(Character &other);
		void TakeDamages(int damages);
		void setWeapon(Weapon &weapon) {this->weapon = weapon;}
		int getHealthPoints() {return this->healthPoints;}
		std::string getName() {return this->name;}
		Weapon &getWeapon() {return (this->weapon);}
};

#endif