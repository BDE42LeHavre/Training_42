/*
    Completez la fonction `main`.
    Le terminal devra afficher :
        3
*/

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
    t_node  *lst_b;
    t_node  node_d = {.value = 4, .next = NULL};
    t_node  node_c = {.value = 3, .next = &node_d};
    t_node  node_b = {.value = 2, .next = &node_c};
    t_node  node_a = {.value = 1, .next = &node_b};

    lst_a = &node_b;
    lst_b = &node_c;
    node_c.next = NULL;
    (void)node_a;
    if (lst_a->next->next == NULL && lst_b->next == NULL)
        printf("%d\n", lst_b->value);
}

/*
    Il faut remplir plusieurs conditions.
    La premiere :
        lst_b->next == NULL
    Il faut donc soit trouver une variable dont le `next` est egal a `NULL`, 
    soit assigner la valeur `NULL` a une variable.
    Nous allons ecrire :
        lst_b = &node_c;
        node_c.next = NULL;
    La deuxieme :
        lst_a->next->next == NULL
    Il faut que le `next` du `next` de la variable connectee a `lst_a` soit egal a `NULL`
    ou assigner la valeur `NULL` a celle-ci.
    Nous allons ecrire :
        lst_a = &node_b;

    Enfin, lorsque nous compilons, nous avons une errur nous disant que `node_a` n'est
    pas utilise.
    Il faut donc l'utiliser, comme nous avons pu voir dans l'ex04.
        (void)node_a;
*/