#include <stdio.h>

typedef struct s_node t_node;

struct s_node
{
    int value;
    t_node *next;
};

int main(void)
{
    t_node  node_b = {.value = 42};
    t_node  node_a = {.value = 21, .next = &node_b};

    node_b.next = &node_a;
    node_a.next = &node_b;
    printf("%d\n", node_a.next->next->next->next->next->next->next->next->next->value);
}

/*
    Il faut faire ici une boucle en connectant `node_a` sur `node_b`.
    Avec cette boucle, nous pouvons donc acceder a autant de `.next` que nous voulons, 
    c'est devenu une liste infinie.
    `node_a` pointe sur `node_b` et `node_b` pointe sur `node_a`.
*/