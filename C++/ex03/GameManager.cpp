#include "GameManager.hpp"

int getRandomNbr(int min, int max)
{
	int randomNumber = (std::rand() % max) + min;
	return randomNumber;
}

void GameManager::InitCharacters()
{
	this->player = new Character("Player", 100, Weapon("Sword", 10));
	this->enemy = new Character("Goblin", 100, Weapon("Axe", 35));
	this->gameEnded = false;
}
void GameManager::StartFight()
{
	this->turnNbr = 0;
	std::cout << GOLD << "Starting a fight between the Player and a Goblin!" << RESET << std::endl;
}
//	Si une touche est pressee, on la stocke dans la variable `char c`
//	et on la retourne si la lecture du terminal a reussi.
char getKeyPressed()
{
    char c = '\0';
    if (read(STDIN_FILENO, &c, 1) == 1)
        return c;
    return '\0';
}

//	Quelques stats. On renvoie un `std::string` pour les afficher plus tard dans un ordre precis.
std::string GameManager::GetStatsStream()
{
	std::stringstream statsStream;
	statsStream << TEAL << "Turn " << this->turnNbr << RESET << std::endl << std::endl;
	statsStream <<"Player's HP:\t" << this->player->getHealthPoints() << std::endl;
	statsStream << "Enemy's HP:\t" << this->enemy->getHealthPoints() << std::endl << std::endl;
	return statsStream.str();
}

std::string GameManager::GetMenuStream()
{
	std::stringstream menuStream;
	menuStream << " ----------------------------- " << std::endl;
	menuStream << "| " << BLUE << "1. Attack         2. Defend" << RESET << " |" << std::endl;
	menuStream << "|                             |" << std::endl;
	menuStream << "|           " << BLUE << "3. Flee" << RESET << "           |" << std::endl;
	menuStream << " ----------------------------- " << std::endl << std::endl;
	return menuStream.str();
}

//	Cette fonction est une amelioration de celle de l'exercice precedent.
//	La detection des touches est continue avec le `while`, nous mettons donc un `usleep(10000)`
//	afin de ne pas faire trop de calculs inutiles.
void GameManager::AskInput()
{
	system("clear");
	std::stringstream choiceStream;
	std::cout << GetStatsStream() << GetMenuStream() << std::endl;
	while (true)
	{
		char c = getKeyPressed();
		if (c == '1')
		{
			choiceStream << Attack(*player, *enemy);
			break;
		}
		else if (c == '2')
		{
			choiceStream << Defend(*player);
			break;
		}
		else if (c == '3')
		{
			choiceStream << Rainbow("Haha! You can't flee from this fight...") << std::endl;
			break;
		}
		usleep(10000);
	}
	choiceStream << EnemyAttack();
	system("clear"); // on vide le texte contenu dans le terminal
	std::cout << GetStatsStream() << GetMenuStream() << choiceStream.str() << std::endl;
	if (this->gameEnded)
		return ;
	std::cout << std::endl << GREY << "Press enter to continue..." << RESET << std::flush;
	while (true)
	{
		char c = getKeyPressed();
		if (c == '\n') // on detecte un retour a la ligne, donc la touche entree
			break;
		usleep(10000);
	}
}

std::string GameManager::EnemyAttack()
{
	std::stringstream enemyStream;
	if (this->gameEnded)
		return NULL;
	if (getRandomNbr(1, 3) == 1)
	{
		this->enemy->setDefend(true);
		enemyStream << LIGHTTEAL << enemy->getName() << " is defending..." << RESET << std::endl;
	}
	else
	{
		enemyStream << Attack(*enemy, *player);
	}
	return enemyStream.str();
}

std::string GameManager::Attack(Character &from, Character to)
{
	std::stringstream attackStream;
	from.Attack(to);
	attackStream << from.getName() << " inflicts " << RED << from.getWeapon().getDamages() << RESET << " damages to " << to.getName() << " with its " << from.getWeapon().getName() << "!" << std::endl;
	if (to.getHealthPoints() <= 0)
		attackStream << EndFight(from);
	return attackStream.str();
}

std::string GameManager::Defend(Character character)
{
	std::stringstream defendStream;
	character.setDefend(true);
	defendStream << LIGHTTEAL << this->player->getName() << " is defending..." << RESET << std::endl << std::endl;
	return defendStream.str();
}

//	Chaque nouveau tour reinitialise la defense des combattants
//	avant de demander ce que le joueur veut faire.
void GameManager::NewTurn()
{
	this->player->setDefend(false);
	this->enemy->setDefend(false);
	this->turnNbr++;
	AskInput();
}

std::string GameManager::EndFight(Character &character)
{
	std::stringstream endStream;
	endStream << std::endl << GOLD << character.getName() << " won!" << RESET;
	this->gameEnded = true;
	return endStream.str();
}

//	Etant donne que `player` et `enemy` sont des variables privees, on cree une fonction en public
//	pour les `delete`, c'est-a-dire pour liberer la memoire que ces variables utilisent.
void GameManager::DeleteCharacters()
{
	delete player;
	delete enemy;
}