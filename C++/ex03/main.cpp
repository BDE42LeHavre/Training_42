/*
	Faites en sorte que l'attaque et la defense fonctionnent correctement.
	La defense divise par deux les degats recus par l'arme de l'adversaire.
	Faites aussi en sorte que la defense fonctionne correctement.
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
	std::cout << gm.GetStatsStream() << gm.GetMenuStream();
	while (!gm.gameEnded)
		gm.NewTurn();
		
	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	gm.DeleteCharacters();
}