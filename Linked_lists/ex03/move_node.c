/*
    Completez la fonction `main(void)`.
    Le terminal devra afficher :
        2
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
    t_node  node_b = {.value = 2, .next = NULL};
    t_node  node_a = {.value = 1, .next = &node_b};

    printf("%d\n", lst_a->next->value);
}

/*
    Dans l'eventualite ou nous aurions deux listes (lst_a et lst_b), 

        t_node  *lst_a;
        t_node  *lst_b;

    nous pourrions aussi transferer un maillon dans la deuxieme liste.

    Cela aurait pour effet de transferer le `.next` et tous les suivants avec le maillon cible.

    Donc, si lst_a contient 5 maillons et que nous transferons le troisieme dans lst_b, 
    lst_b contiendrait 3 maillons.

        lst_b = lst_a->next->next;

    Les attaches restent, ce ne sont que des pointeurs vers d'autres maillons.

        Avant modification :

           lst_a     lst_b
        |    1    |    -    |
        |    2    |    -    |
        |    3    |    -    |
        |    4    |    -    |
        |    5    |    -    |

        Apres :

           lst_a     lst_b
        |    1    |    3    |
        |    2    |    4    |
        |    3    |    5    |
        |    4    |    -    |
        |    5    |    -    |

    Vous voyez ici que les maillons de lst_a sont toujours presents.
    C'est parce que nous n'avons pas change les pointeurs de lst_a.
    Le deuxieme maillon de lst_a pointe toujours vers le troisieme.

    Pour remedier a cela, il faut simplement ecrire :

        lst_a->next->next = NULL;

    Puisque nous avons enleve l'adresse pointee par `lst_a->next->next`,
    la representation des listes devrait ressembler a ca :

           lst_a     lst_b
        |    1    |    3    |
        |    2    |    4    |
        |    -    |    5    |
        |    -    |    -    |
        |    -    |    -    |
*/