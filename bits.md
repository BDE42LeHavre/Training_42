<h2>Comprendre les bits</h2>

***Qu'est-ce qu'un bit ?***

Un **bit** - a ne pas confondre avec **byte** - est la plus petite unite de stockage de donnees.

Comme un interrupteur classique, sa valeur est binaire (0 ou 1).

<h2>Bytes</h2>

Un **byte** est compose de plusieurs **bits**. Dans la plupart des systemes actuels, il y a 8 **bits** par **byte**.

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/byte_size.jpg width=512>

Comme vous pouvez le voir sur cette image, la valeur decimale maximale du **byte** est 255.

La valeur decimale d'un **byte** est determinee comme ceci :

<img src=https://github.com/BDE42LeHavre/Training_42/blob/main/imgs/byte_value.jpg width=512>

On lit de droite a gauche. Chaque case represente la valeur maximale de la case precedente + 1.

	00000001 = 1,
	00000010 = 2,
	00000011 = 3,
	00000100 = 4,
	00101010 = 42,
	11111111 = 255.

Pour un **unsigned int**, le nombre de bits est de **8 * 4 = 32**, donc **4,294,967,295**.

Un **int**, ou **signed int** est en revanche divise entre des valeurs negatives et positives. 

La representation binaire de **INT_MIN** est `1000 0000 0000 0000 0000 0000 0000 0000`.

La representation binaire de **INT_MAX** est `0111 1111 1111 1111 1111 1111 1111 1111`.

Pour un **signed int**, on determine son signe (positif ou negatif) avec son `most significant bit (MSB)`, c'est-a-dire son chiffre le plus a gauche en binaire.

Si le **MSB** est de **0**, alors le nombre est positif. S'il est de **1**, il est negatif.

Pour mettre un **int** positif en negatif, il faut inverser sa valeur binaire et ajouter 1.

	4 =
	0000 0000 0000 0000 0000 0000 0000 0100 <- valeur binaire
	1111 1111 1111 1111 1111 1111 1111 1011 <- inversion
	1111 1111 1111 1111 1111 1111 1111 1100 <- +1

	67 =
	0000 0000 0000 0000 0000 0000 0100 0011 <- valeur binaire
	1111 1111 1111 1111 1111 1111 1011 1100 <- inversion
	1111 1111 1111 1111 1111 1111 1011 1101 <- +1

<h2>Les operateurs binaires</h2>

[Lien utile](https://zestedesavoir.com/tutoriels/755/le-langage-c-1/notions-avancees/manipulation-des-bits/)