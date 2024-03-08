<h2>Les constructeurs et destructeurs</h2>

Dans la classe `Weapon`, nous avons un constructeur `Weapon();` ainsi qu'un destructeur `~Weapon();`.

Ces methodes sont <span style="color:teal;">automatiquement appelees</span> lors de la construction et la destruction de l'objet.

Elles fonctionnent comme n'importe quelles methodes, sauf qu'elles ne renvoient rien.

Au contraire des constructeurs, les destructeurs ne peuvent pas avoir de surcharge.

Ex:
```C++
class Weapon
{
	public:
		Weapon();
		Weapon(int newDamages);
}
```

Ici, la classe a plusieurs constructeurs (on appelle ca de la <span style="color:teal;">surcharge</span>), ce qui signifie que vous pouvez initialiser une nouvelle instance de cette classe avec ou sans parametres.

Ex:
```C++
#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(int newDamages)
{
	this->damages = newDamages;
}

// a noter qu'on peut aussi ecrire :

Weapon::Weapon(int newDamages) : damages(newDamages) {}

```

Vous pouvez creer un objet `Weapon` de plusieurs facons:

```C++
int main()
{
	Weapon sword;
	Weapon axe(10);
}
```

Ici, l'objet `sword` sera initialise sans aucune configuration.

L'objet `axe`, en revanche, sera initialise avec l'attribut `damages = 10`; 