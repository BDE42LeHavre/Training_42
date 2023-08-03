#include <stdio.h>

typedef struct s_node t_node;

struct s_node
{
    int value;
    t_node *next;
};

int main(void)
{
    t_node  node_a;
    t_node  node_b;

    node_a.value = 21;
    node_b.value = 42;
    node_a.next = &node_b;
    
    printf("%d\n", node_a.next->value);
}

/*
    `node_b.value` contient la valeur que nous voulons afficher.
    Pour connecter `node_b` a `node_a`, il suffit d'ecrire :
        node_a.next = &node_b;
    Nous connectons ici le pointeur `next` sur l'adresse (&) `node_b`.
    Ecrire `node_a.next->value` revient maintenant a ecrire `node_b.value`.

    Sur la ligne :
        printf("%d\n", node_a.next->value);
    nous pouvons voir qu'a la suite de `node_a`, il y a un point au debut puis une fleche.
    Nous mettons un point lorsque nous accedons directement a une variable et
    nous mettons une fleche lorsque nous passons par un pointeur.
    `next` est une variable directe de `node_a`, donc nous mettons un point devant.
    Mais etant donne qu'il est un pointeur, il faut mettre une fleche a la suite
    pour indiquer qu'on accede a une variable pointee.
*/