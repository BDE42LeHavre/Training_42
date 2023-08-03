#include <stdio.h>

typedef struct s_node t_node;

struct s_node
{
    int value;
    t_node *next;
};

int main(void)
{
    t_node  *lst_a;
    t_node  node_b = {.value = 2, .next = NULL};
    t_node  node_a = {.value = 1, .next = &node_b};

    lst_a = &node_a;
    printf("%d\n", lst_a->next->value);
}

/*
    Nous pouvons aussi connecter un element sur une toute nouvelle variable,
    chaque maillon connecte le restera.
    En ecrivant :
        lst_a = &node_a;
    le pointeur `lst_a` contient l'adresse de `node_a`, nous pouvons donc choisir
    d'ecrire `lst_a->next->value` au lieu de `node_a->next->value`.
*/