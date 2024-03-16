<a name="readme-top"></a>

<div align="center"><h1>C++</h1></div>

<summary><kbd>Table des matieres</kbd></summary>

- [Introduction](#introduction)
- [Les classes](#les-classes)
- [Getters() et Setters()](#getters-et-setters)
- [Heritage](#heritage)


## Introduction :

Dans les exercices sur le c++, nous allons utiliser un Makefile et un fichier .hpp et un .cpp pour chaque classe.

Vous n'aurez donc pas a compiler les fichiers manuellement.

Nous utilisons aussi la version <span style="color:teal;">c++98</span>.

Ceci afin de correspondre aux regles donnees dans les sujets de 42.

Les consignes seront uniquement dans les fichiers `main.cpp`.

<div align="right">

[![Back to Top](https://img.shields.io/badge/Back_to_Top-%E2%86%91-1abc9c.svg)](#readme-top)

</div>

## Les classes

En c++, les classes sont comme des boites dans lesquelles on va pouvoir mettre des <span style="color:teal;">variables</span> mais aussi des <span style="color:teal;">fonctions</span>.

On dit de ces variables et fonctions qu'elles sont <span style="color:teal;">membres</span> de la classe.

En c++, les structs fonctionnent de la meme maniere que les classes. Ils ont des constructeurs et destructeurs, les fonctions membres peuvent avoir de la surcharge, etc.

Par defaut, les fonctions et variables membres des structs sont en `public` tandis que celles des classes sont en `prive`.

C'est pour cela qu'il est important de definir precisement le type d'acces aux membres.

A l'interieur du coffre, il y a des pieces <span style="color:teal;">(en prive)</span>, des fonctions et un sac <span style="color:teal;">(en public)</span> :

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/chest.png width=512>

Et dans ce sac, nous avons des pieces :

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/gold_sack.png width=256>

```C++
class MyClass
{
	private:
		int		nb;
	public:
		void	DoStuff();
};
```

Nous avons ici une classe qui s'appelle MyClass et qui contient une variable membre `int nb` en `private` et une fonction membre `void DoStuff()` en `public`.

Nous ne pouvons pas acceder a une variable ou a une fonction membre definie en <span style="color:teal;">prive</span> hors de cette classe.

```C++
class Chest
{
	private:
		int		goldInChest;
	public:
		void	Open();
};

int main(void)
{
	Chest myChest;
	myChest.goldInChest = 42; // ne fonctionne pas !

	std::cout << "This chest contains " << myChest.goldInChest
		<< " gold pieces." << std::endl; // ne fonctionne pas non plus !
}
```

En theorie, le texte affiche sur le terminal devrait indiquer le nombre de pieces que contient le coffre.

En pratique, etant donne que la variable membre `goldInChest` est en <span style="color:teal;">prive</span>, elle n'est <span style="color:teal;">pas accessible</span> dans le `main()` ni a aucun autre endroit en dehors de la classe.

C'est une bonne facon d'empecher la modification d'une variable dans un autre fichier ou une autre fonction.

En revanche, nous pourrons appeler la fonction membre `myChest.Open()` de n'importe ou, tant que la classe `Chest` est definie et accessible.

```C++
class Chest
{
	public:
		void Open();
};

Chest::Open()
{
	std::cout << "This chest contains " << this->goldInChest
		<< " gold pieces." << std::endl;		
}

int main(void)
{
	Chest myChest;

	myChest.Open(); // fonctionne !
}
```
L'emploi de `this->` est optionnel et n'est utile que pour une raison de clarte ou bien quand une variable membre et une autre ont le meme nom. <span style="color:red;">(Ne faites pas ca !)</span>

Une bonne pratique est de nommer les variables membres avec un `_` devant, par exemple. Il est ainsi bien plus evident de comprendre d'ou vient la variable en question.

<div align="right">

[![Back to Top](https://img.shields.io/badge/Back_to_Top-%E2%86%91-1abc9c.svg)](#readme-top)

</div>

## Getters() et Setters()

Vous pouvez voir les `Getters()` et `Setters()` comme le gardien du coffre que nous avons cree.

Ce gardien va etre l'intermediaire entre l'interieur et l'exterieur de la classe `Chest`.

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/illustration_cpp.jpg width=512>

Pour pouvoir recuperer la valeur de la variable `int goldInChest`, nous pouvons faire un `Getter()`:

```C++
class Chest
{
	private:
		int		goldInChest;
	public:
		void	Open();
		int		getGoldInChest(void) {return this->getGoldInChest;} // ceci est un getter
};
```

Le `Getter()` est une fonction membre qui va permettre d'<span style="color:teal;">acceder publiquement</span> a la valeur d'une <span style="color:teal;">variable membre privee</span> sans aucune possibilite de la modifier.

> [!TIP]
> A noter que :
> ```C++
> int getGoldInChest(void) {return this->getGoldInChest;}
> ```
> peut aussi s'ecrire :
> ```C++
> int getGoldInChest(void)
> {
> 	return this->getGoldInChest;
> }
> ```
> La deuxieme version est identique a la premiere, avec quelques espaces et retours a la ligne en plus.

Appeler un `Getter()`, c'est demander au gardien du coffre de vous dire combien celui-ci contient de pieces.

Il existe aussi le `Setter()`, qui va permettre de donner a cette variable privee une valeur choisie.

```C++
class Chest
{
	private:
		int		goldInChest;
	public:
		void	Open();
		int		getGoldInChest(void) {return this->getGoldInChest;}
		void	setGoldInChest(int newAmount) {this->getGoldInChest = newAmount;} // this is a setter
};
```

Appeler la fonction membre `void setGoldInChest(int newAmount)` va donc permettre de definir une valeur a la variable `goldInChest` depuis l'exterieur de la classe `Chest`.

Appeler un `Setter()`, c'est un peu comme donner des pieces au gardien du coffre afin qu'il les mette dedans pour vous.

<div align="right">

[![Back to Top](https://img.shields.io/badge/Back_to_Top-%E2%86%91-1abc9c.svg)](#readme-top)

</div>

## Heritage

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/heritage.png width=512>

Si vous voulez creer plusieurs classes qui ont des choses en commun tout en leur donnant des comportements differents, l'heritage est un bon moyen d'y arriver !

Imaginons que vous voulez creer une classe `Voiture`, une autre `Bateau`, une autre `Avion`, etc.

Vous pouvez <span style="color:teal;">regrouper toutes les caracteristiques communes</span> a ces classes dans une seule, disons `Vehicule`.

```C++
class Vehicle
{
	public:
		double	weight;
		double	height;
		int 	cost;
		virtual void	Drive();
		[...]
};
```
Votre classe `Vehicle` va avoir ses propres caracteristiques, comme un poids, une taille, un prix... ainsi que ses propres fonctionnalites.

```C++
class Car : public Vehicle
{
	public:
		int 	nbWheels;
		void	OpenTrunk();
		void	Drive();
		[...]
};
```
Votre classe `Car` a donc <span style="color:teal;">toutes les caracteristiques public/protected</span> de la classe `Vehicle`, avec en plus la fonction membre `OpenTrunk()`. 

Vous pouvez aussi voir que la fonction `Vehicle::Drive()` est en `virtual`, mais pas dans la classe `Car`.

Cela indique que la fonction `Drive()` peut avoir <span style="color:teal;">un autre comportement</span> dans la classe derivee.

Il existe aussi des fonctions que l'on appelle des `interfaces`. Elles se definissent comme ceci :

```C++
virtual void SomeFunction() = 0;
```

Le `= 0` indique donc que la fonction est <span style="color:teal;">purement virtuelle</span>. Elle devra donc etre definie dans les classes derivees.

```C++
class Vehicle
{
	public:
		virtual void	Drive() = 0;
		[...]
};

class Car : public Vehicle
{
	public:
		void	Drive();
		[...]
};
```

Dans les fichiers .cpp, il n'y aura rien a ecrire pour la fonction `Vehicle::Drive()`. En revanche, il faudra definir le comportement de la fonction `Car::Drive()`.

```C++
void Car::Drive()
{
	std::cout << "I am driving a car!" << std::endl;
}
```

En `c++98`, vous pouvez meme faire en sorte qu'une classe entiere soit <span style="color:teal;">abstraite</span>. C'est-a-dire que cette classe ne pourra pas etre instanciee directement.

```C++
class AVehicle
{
	public:
		virtual void	Drive() = 0;
		virtual ~Vehicle();
		[...]
};

class Car : public AVehicle
{
	public:
		void	Drive();
		~Car();
		[...]
};
```
Ici, le <span style="color:teal;">destructeur</span> est passe en <span style="color:teal;">virtuel</span> dans la classe `Vehicle`. Nous avons meme change le nom de cette classe en `AVehicle` afin de comprendre plus facilement que cette classe est desormais une <span style="color:teal;">classe abstraite</span>.

Mettre le destructeur en `virtual` empeche toute instanciation de cette classe.

En revanche, vous pouvez toujours instancier la classe `Car`.

<div align="right">

[![Back to Top](https://img.shields.io/badge/Back_to_Top-%E2%86%91-1abc9c.svg)](#readme-top)

</div>