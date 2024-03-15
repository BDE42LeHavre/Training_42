#ifndef GOBLIN_HPP
# define GOBLIN_HPP

# include "Character.hpp"
# include "Colors.hpp"

/*
	Ecrire :
		`class Goblin : public Character`
	permet a la classe `Goblin` d'avoir toutes les caracteristiques de la classe `Character`
	mais aussi de rajouter du contenu sans modifier la classe dont elle herite.
	La classe `Goblin` aura cependant acces aux variables et fonctions `public` et `protected`,
	mais pas aux `private`.
	Ainsi, la classe `Goblin` pourra avoir un comportement different de la classe `Character`.
	C'est comme avoir une classe `Vehicule` et une classe derivee `Voiture`
	ou une autre classe derivee `Train`, qui sont aussi des vehicules mais
	qui ont leurs propres caracteristiques et fonctionnalites.
*/
class Goblin : public Character
{
	public:
		Goblin(int newHealthPoints, Weapon newWeapon);
		~Goblin() {}
};

#endif