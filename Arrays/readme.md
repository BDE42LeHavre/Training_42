<h2>Petite explication sur les structs. </h2>

Vous pouvez voir un struct comme une boite contenant des variables.

Nous pouvons meme faire un carnet d'adresses comme ce que nous avons sur nos telephones.

![struct](struct)

Dans notre `main`, nous pouvons creer une variable `struct s_contact	contact;` et a l'interieur, nous pouvons mettre les valeurs qu'on veut aux variables contenues dans ce struct.

	#include <stdio.h>

	struct s_contact
	{
		char			*nom;
		char			*prenom;
		unsigned int	numero;
	};

	int		main(void)
	{
		struct s_contact	contact;

		contact.nom = "Celere";
		contact.prenom = "Jacques";
		contact.numero = 1234567890;

		printf("Nom :\t\t%s\nPrenom :\t%s\nNumero :\t%u\n",
				contact.nom, contact.prenom, contact.numero);
	}

Le resultat sera :

![output_struct](output_struct)

Pour acceder a une variable dans un struct, nous devons donc ecrire le nom que nous avons donne au struct, puis mettre un point `.` pour l'ouvrir, puis ecrire le nom de la variable contenue dans ce struct. Ce qui donne `contact.nom` pour la variable `nom`.

<h2>Les tableaux de structs : </h2>

Pour un tableau de structs, c'est le meme principe que pour n'importe quel tableau.

On ecrit :

	struct s_contact	contacts[nbr];

Cette facon d'ecrire est correcte si nous savons a l'avance le nombre d'elements que contiendra ce tableau.

Si nous ne le savons pas tout de suite, nous allons simplement ecrire :

	struct s_contact	*contacts;

Puis nous nous faisons un `malloc` quand on sait quelle taille on veut lui donner :

	contacts = (struct s_contact *)malloc(sizeof(struct s_contact) * nbr);

Un tableau de `struct s_contact` peut etre represente ainsi :

![struct_array](struct_array)

Acceder au contenu de ce tableau se fera de facon identique dans les deux cas, c'est-a-dire avec `contacts[nbr]`.

	#include <stdio.h>

	struct s_contact
	{
		char			*nom;
		char			*prenom;
		unsigned int	numero;
	};

	int		main(void)
	{
		struct s_contact	contacts[3] = {
		[0] = { .nom = "Celere", .prenom = "Jacques", .numero = 1234567890 },
		[1] = { .nom = "Ouye", .prenom = "Jacques", .numero = 1111111111 },
		[2] = { .nom = "Aite", .prenom = "Jacques", .numero = 4242424242 }
		};

		printf("Nom\t[0]:\t%s\nPrenom\t[1]:\t%s\nNumero\t[2]:\t%u\n",
				contacts[0].nom, contacts[1].prenom, contacts[2].numero);
	}

Le resultat sera :

![output_struct_array](output_struct_array)

Nous avons donc affiche le `nom` du `contact[0]`, le `prenom` du `contact[1]` et le `numero` du `contact[2]`.