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

    if (lst_a->next->next == NULL && lst_b->next == NULL)
        printf("%d\n", lst_b->value);
}
