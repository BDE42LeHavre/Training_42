/*
	Corrigez les differents fichiers afin que le terminal affiche :

		[Player]:
		Weapon name: Sword
		Damages: 10
*/

#include "Character.hpp"

int main()
{
	Weapon sword("Sword", 10);
	Character player("Player", 100, sword);
	player.ShowCharacter();
}