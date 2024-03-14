/*
	En fouillant dans les fichiers, vous pouvez voir qu'il y a
	une fonction qui permet de multiplier les degats d'une arme par 5.

	La fonction UpgradeWeapon() se situe dans la classe `Weapon`
	et n'est donc pas accessible dans le `main()` depuis les objets `Character`.
	Il faut donc seulement recuperer l'instance de l'objet `Weapon` en appelant `player.getWeapon()`
	puis ameliorer cette arme avec la fonction membre `UpgradeWeapon()`.
*/

#include "Character.hpp"

void AskInput(std::string &input)
{
	std::cout << "\033[38;2;100;100;100mPress enter to continue...\033[0m";
	std::getline(std::cin, input);
	std::cout << "\033[F\033[K" << std::endl;
}

int main()
{
	Character player("Player", 100, Weapon("Sword", 10));
	Character enemy("Goblin", 100, Weapon("Axe", 35));
	std::string input;
	int turnNbr = 1;

	player.getWeapon().UpgradeWeapon();
	std::cout << "\033[38;2;204;146;50mStarting a fight between the Player and a Goblin!\033[0m" << std::endl;
	AskInput(input);
	while (player.getHealthPoints() > 0 && enemy.getHealthPoints() > 0)
	{
		std::cout << "\033[38;2;0;100;100mTurn " << turnNbr << ":\033[0m" << std::endl << std::endl;
		enemy.Attack(player);
		player.Attack(enemy);
		if (player.getHealthPoints() <= 0 || enemy.getHealthPoints() <= 0)
			continue ;
		AskInput(input);
		turnNbr++;
	}
}