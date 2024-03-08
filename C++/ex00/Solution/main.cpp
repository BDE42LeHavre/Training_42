#include "MyFirstClass.hpp"

int main()
{
	Weapon myWeapon;

	myWeapon.showStats();
}

/*
	En regardant le fichier MyFirstClass.hpp,
	vous pouvez voir que la methode `showStats()` de la classe `Weapon` est en `public`.
	Vous pouvez donc l'appeler dans le `main()`.
	Le contenu de cette methode affiche le texte demande sur `std::cout`, qui represente la sortie standard.
*/