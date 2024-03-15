/*
	Ce gobelin fait bien trop de degats ! 
	Faites en sorte que l'ennemi soit de classe `Goblin` au lieu de `Character`.
	Le gobelin sera bien plus faible qu'un ennemi standard et le joueur
	sera capable de gagner le combat sans modifier l'arme qu'il porte.
*/

#include "GameManager.hpp"

int main()
{
	std::srand(std::time(0));
	struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
	newt.c_cc[VMIN] = 0;
	newt.c_cc[VTIME] = 0;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

	GameManager gm;

	gm.InitCharacters();
	gm.StartFight();
	while (!gm.gameEnded)
		gm.NewTurn();
		
	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	gm.DeleteCharacters();
}