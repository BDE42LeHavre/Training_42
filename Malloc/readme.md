<a name="readme-top"></a>

<h2>Malloc ?</h2>

`malloc()` est une fonction qui va tenter d'allouer de la memoire sur le **tas**, ou **heap** de maniere dynamique. 

Il y a un seul parametre a entrer lors de l'appel de cette fonction, c'est la taille de la zone memoire demandee.

Ainsi, `char *str = malloc(5);` demandera au systeme d'allouer 5 **bytes** pour la variable `str`.

Il est preferable de preciser la taille du type de variable qu'on utilise via `sizeof()`, comme suit :

```C
char *str = malloc(sizeof(char) * 5);
```

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/char_array_size.jpg width=512>

Dans le cas ou on a `void *nbr` au lieu de `int *nbr`, nous allons devoir preciser le type de retour de la fonction `malloc()` avec un **cast**, comme suit :

```C
void *nbr = (int *)malloc(sizeof(int) * 3);
```

Cela permettra donc de demander une allocation de memoire d'une taille de 3 * 4 **bytes**, puisqu'un `int` fait 4 **bytes**.

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/char_int_size.jpg width=512>

Demander l'allocation d'une zone de memoire est une chose, mais la reussir en est une autre !

Normalement, il ne devrait pas y avoir de probleme. De nos jours les ordinateurs ont largement assez de memoire.

Mais si, pour une raison ou pour une autre, le `malloc()` echoue, il faut mettre une protection en demandant au programme de verifier si cette demande a ete acceptee ou non.

Pour cela, il suffit de faire :

```C
char *str = malloc(sizeof(char) * 5);
if (!str)
	return ;// ou bien tout ce que vous voulez, mais le programme doit s'arreter dans la plupart des cas
```

Sans cette protection, le programme va essayer d'executer la suite du code, ce qui va surement finir en **crash**.

<h2>Un grand pouvoir implique de grandes responsabilites.</h2>

Pour chaque `malloc()`, il faut un `free()` !

Chaque `malloc()` alloue de la memoire, mais celle-ci n'est pas liberee automatiquement. C'est a nous qu'il incombe de remplir cette tache !

Pour ceci, nous avons la fonction `free()`. Cette fonction prend un pointeur en parametre.

Il suffit d'ecrire :

```C
char *str = malloc(sizeof(char) * 5);
if (!str)
	return ;

[...]

free(str);
```

<div align="right">

[![Back to Top](https://img.shields.io/badge/Back_to_Top-%E2%86%91-1abc9c.svg)](#readme-top)

</div>