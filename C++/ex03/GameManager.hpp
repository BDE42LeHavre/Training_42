#ifndef GAMEMANAGER_HPP
# define GAMEMANAGER_HPP 

# include "Character.hpp"
# include "Colors.hpp"
# include <cstdlib>
# include <ctime>
# include <termios.h>
# include <unistd.h>

class GameManager
{
	private:
		Character *player;
		Character *enemy;
		int turnNbr;
	public:
		bool gameEnded;
		void InitCharacters();
		void StartFight();
		void NewTurn();
		void AskInput();
		std::string Attack(Character &from, Character to);
		std::string Defend(Character character);
		std::string EnemyAttack();
		std::string EndFight(Character &character);
		std::string GetStatsStream();
		std::string GetMenuStream();
		void DeleteCharacters();
};

#endif