#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	private:
		int damages;
		std::string weaponName;

	public:
		void showStats(void);
		Weapon() {}
		Weapon(std::string newName, int newDamages);
		~Weapon() {}
		int getDamages() {return this->damages;}
		void setDamages(int newDamages) {this->damages = newDamages;}
		std::string getName() {return this->weaponName;}
		void UpgradeWeapon();
};

#endif