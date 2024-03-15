/*
	Pour faire en sorte que l'ennemi devienne un vrai gobelin,
	il faut l'initialiser en tant que classe `Goblin` dans la fonction `InitCharacters()`, 
	au lieu de la classe `Character`.
	L'ennemi sera plus faible grace au constructeur de la classe `Goblin`.
	Ce constructeur est d'ailleurs un peu different, il n'accepte pas de
	`std::string` en premier parametre. 
	Il faut donc declarer le gobelin sans nom.
*/

void GameManager::InitCharacters()
{
	this->player = new Character("Player", 100, Weapon("Sword", 10));
	this->enemy = new Goblin(100, Weapon("Axe", 35));
	this->gameEnded = false;
}