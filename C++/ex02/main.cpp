/*
	Faites en sorte que le joueur gagne le combat en appelant une seule fonction dans le `main()`.
*/

#include "Character.hpp"

//	Cette fonction affiche un message sur le terminal puis recupere l'input du joueur,
//	en attente d'un appui sur la touche `entree`.
void AskInput(std::string &input)
{
	std::cout << "\033[38;2;100;100;100mPress enter to continue...\033[0m";
	std::getline(std::cin, input);
	std::cout << "\033[F\033[K" << std::endl;
}

//	Ici nous avons une boucle `while` qui va servir de boucle de combat. 
//	Chaque tour est automatique et le joueur n'a aucune incidence sur ce qui peut s'y passer.
int main()
{
	Character player("Player", 100, Weapon("Sword", 10));
	Character enemy("Goblin", 100, Weapon("Axe", 35));
	std::string input;
	int turnNbr = 1;

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