<h2>Introduction :</h2>

Dans les exercices sur le c++, nous allons utiliser un Makefile et un fichier .hpp et un .cpp pour chaque classe.

Vous n'aurez donc pas a compiler les fichiers manuellement.

Nous utilisons aussi la version <span style="color:teal;">c++98</span>.

Ceci afin de correspondre aux regles donnees dans les sujets de 42.

Les consignes seront uniquement dans les fichiers `main.cpp`

<h2>Les classes</h2>

En c++, les classes sont comme des boites dans lesquelles on va pouvoir mettre des <span style="color:teal;">variables</span> mais aussi des <span style="color:teal;">fonctions</span>.

On dit de ces variables et fonctions qu'elles sont <span style="color:teal;">membres</span> de la classe.

En revanche, tout ce qui est defini en public est accessible hors de cette classe.

En c++, les structs fonctionnent de la meme maniere que les classes. Ils ont des constructeurs et destructeurs, les fonctions membres peuvent avoir de la surcharge, etc.

Les structs ont leurs membres en `public` par defaut, tandis que les classes ont leurs membres en `prive`.

C'est pour cela qu'il est important de definir precisement le type d'acces aux membres.

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/gold_sack.jpg width=256>

Dans le coffre, nous avons un sac.

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/chest.jpg width=512>

Et dans ce sac, nous avons des pieces.

```C++
	class MyClass
	{
		private:
			int nb;
		public:
			void DoStuff();
	};
```

Nous avons ici une classe qui s'appelle MyClass et qui contient une variable membre `int` en prive et une fonction membre `void DoStuff()` en public.

Nous ne pouvons pas acceder a une variable ou a une fonction membre definie en <span style="color:teal;">prive</span> hors de cette classe.


Dans ce sac, il y a des pieces.

```C++
	class Chest
	{
		private:
			int goldInChest;
		public:
			void Open();
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

En pratique, etant donne que l'variable membre `goldInChest` est en <span style="color:teal;">prive</span>, il n'est <span style="color:teal;">pas accessible</span> dans le `main()` ni a aucun autre endroit en dehors de la classe.

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

<h3>Getters() et Setters()</h3>

Vous pouvez voir les `Getters()` et `Setters()` comme le gardien du coffre que nous avons cree.

Ce gardien va etre l'intermediaire entre l'interieur et l'exterieur de la classe `Chest`.

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/illustration_cpp.jpg width=512>

Pour pouvoir recuperer la valeur de l'variable membre `int goldInChest`, nous pouvons faire un `Getter()`:

```C++
	class Chest
	{
		private:
			int goldInChest;
		public:
			void Open();
			int getGoldInChest(void) {return this->getGoldInChest;} // this is a getter
	};
```

Le `Getter()` est une fonction membre qui va permettre d'<span style="color:teal;">acceder publiquement</span> a la valeur d'un <span style="color:teal;">variable membre prive</span> sans aucune possibilite de la modifier.

> [!TIP]
> A noter que :
> ```C++
> 	int getGoldInChest(void) {return this->getGoldInChest;}
> ```
> peut aussi s'ecrire :
> ```C++
> 	int getGoldInChest(void)
> 	{
> 		return this->getGoldInChest;
> 	}
> ```

Appeler un `Getter()`, c'est demander au gardien du coffre de vous dire combien celui-ci contient de pieces.

Il existe aussi le `Setter()`, qui va permettre de donner a cet variable membre prive une valeur choisie.

```C++
	class Chest
	{
		private:
			int goldInChest;
		public:
			void Open();
			int getGoldInChest(void) {return this->getGoldInChest;}
			void setGoldInChest(int newAmount) {this->getGoldInChest = newAmount;} // this is a setter
	};
```

Appeler la fonction membre `void setGoldInChest(int newAmount)` va donc permettre de definir une valeur a la variable `goldInChest` depuis l'exterieur de la classe `Chest`.

Appeler un `Setter()`, c'est un peu comme donner des pieces au gardien du coffre afin qu'il les mette dedans pour vous.