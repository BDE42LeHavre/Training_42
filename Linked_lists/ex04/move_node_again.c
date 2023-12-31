/*
    Completez la fonction `main(void)`.
    Le terminal devra afficher :
        4
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
    
    lst_a = &node_a;
    printf("%d\n", lst_b->next->value);
}
