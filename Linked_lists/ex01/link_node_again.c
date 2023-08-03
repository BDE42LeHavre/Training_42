/*
    Creez la fonction `link_nodes` qui mettra l'element `node_b` a la suite de `node_a`.
    Le terminal devra afficher:
        42
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
    t_node  node_a = {.value = 21};
    t_node  node_b = {.value = 42};

    link_nodes(&node_b, &node_a);
    printf("%d\n", node_a.next->value);
}

/*
    "Tu tires ou tu pointes ?"
        - Jean-Beauf

    Que se passe-t-il quand on fait :
        node_a.next = &node_b;
        node_b.next = &node_a;
    ?
*/