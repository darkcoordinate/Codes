#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int type;
    int rank;
} Card;

typedef struct{
    Card* card;
    Card_list *next;
    Card_list *prev;
} Card_list;

typedef struct{
    Card_list *crd_lst;
    Card_cllct *next;
    Card_cllct *prev;
} Card_cllct;

void add_card(Card card, Card_list* crd_list)
{
    Card_list *p1, *p2;
    p1 = crd
}
int main()
{
    
}
