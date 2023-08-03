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
    
    lst_a = &node_a;
    (void)lst_a;
    lst_b = &node_c;
    printf("%d\n", lst_b->next->value);
}

/*
    Dans un premier temps, il va falloir utiliser la variable `lst_a`,
    sinon le compileur nous envoie un petit message d'erreur.
    Puisque cette variable ne nous est pas utile, nous pouvons simplement ecrire :
        (void)lst_a;
    Ensuite, il faut faire en sorte que `lst_b->next->value` pointe sur la valeur `4`.
    Puisque la variable contenant `4` est sur `node_d.value` et que le `printf` demande
    `lst_b->next->value`, il faut trouver la variable `next` qui pointe sur `node_d`.
    Cette variable est `node_c.next`.
    Nous connectons donc `node_c` sur `lst_b` afin de pouvoir resoudre cet exercice.
*/