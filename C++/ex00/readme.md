<h2>Les constructeurs et destructeurs</h2>

Dans la classe `Weapon`, nous avons un constructeur `Weapon();` ainsi qu'un destructeur `~Weapon();`.

Ces fonctions membres sont <span style="color:teal;">automatiquement appelees</span> lors de la construction et la destruction de l'objet.

Elles fonctionnent comme n'importe quelles fonctions, sauf qu'elles ne renvoient rien.

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

```

Vous pouvez noter qu'il y a `Weapon::` devant la fonction `Weapon()`.

Cela signifie que la fonction `Weapon()` fait partie de la classe `Weapon`. Il s'agit d'une sorte de hierarchie.

Vous pouvez creer un objet `Weapon` de plusieurs facons:

```C++
int main()
{
	Weapon sword;
	Weapon axe(10);
}
```

Ici, l'objet `sword` sera initialise sans aucune configuration.

L'objet `axe`, en revanche, sera initialise avec la variable membre `damages = 10`; 