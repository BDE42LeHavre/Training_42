/*
    Completez la fonction `main(void)` afin de mettre l'element `node_b` a la suite de `node_a`.
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
    t_node  node_a;
    t_node  node_b;

    node_a.value = 21;
    node_b.value = 42;
    
    printf("%d\n", node_a.next->value);
}

/*
    Ici, il est question de mettre l'adresse de `node_b` (donc l'adresse pointant dessus) 
    sur le pointeur de `node_a`.

    L'adresse de `node_a` - donc `&node_a`-
    est compatible avec le parametre `t_node *node_a` que l'on pourrait mettre dans une fonction.

    On pourrait donc manipuler les nodes dans une autre fonction, via leurs pointeurs...
    Dans ce cas, nous n'ecririons plus :
        node_a.value = 21;
    Mais :
        node_a->value = 21;

    Lorsque l'on accede directement a une variable dans `t_node`, on met un point.
    Lors de l'acces a une variable contenue dans le struct pointe, on met une fleche.
*/