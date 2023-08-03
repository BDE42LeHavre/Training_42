#include <stdio.h>

typedef struct s_node t_node;

struct s_node
{
    int value;
    t_node *next;
};

void    link_nodes(t_node *node_b, t_node *node_a)
{
    node_a->next = node_b;
}

int main(void)
{
    t_node  node_a = {.value = 21};
    t_node  node_b = {.value = 42};

    link_nodes(&node_b, &node_a);
    printf("%d\n", node_a.next->value);
}

/*
    Dans le `main`, nous pouvons voir que l'appel de la fonction `link_nodes`
    a deux arguments qui sont les adresses de `node_a` et `node_b`.
    Dans le prototype de la fonction, il faudra donc mettre des pointeurs.
    Dans cette fonction, il ne nous restera plus qu'a connecter `node_b` sur `node_a`.
    Nous ecrivons :
        node_a->next = node_b;
    `node_b` n'a pas de `&` parce qu'il s'agit d'un pointeur et non d'une variable directe.
    Le pointeur contient l'adresse de la variable en question.
*/