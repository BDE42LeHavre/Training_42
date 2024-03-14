#include <iostream>

class Weapon
{
	public:
		Weapon();
		~Weapon();
		int damages;
		std::string weaponName;
		void showStats(void);
};