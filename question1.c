#include <stdlib.h>
#include <stdio.h>

struct node_int;
typedef struct node_int *node;
struct node_int
{
    void *data;
    node next;
};

struct list_int;
typedef struct list_int *list;

struct list_int
{
    node first;
};


void f1(list l)
{
    node c;
    
    c = l->first;       // address of node c
     
    while (c->next->next !=NULL)
    {
        c = c->next;
    }
    
    c->next = NULL;
    
}


int main()
{

}

