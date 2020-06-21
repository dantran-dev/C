#include <stdlib.h>
#include <stdio.h>

struct dnode_int;
typedef struct dnode_int *dnode;

struct dnode_int
{
    dnode prev;
    void *data;
    dnode next;
};

struct list_int;
typedef struct list_int *list;

struct list_int
{
    dnode first;
};

void zip(list l1, list l2)
{
    dnode c1 = l1->first;
    dnode c2 = l2->first;
    dnode r = NULL;

    while ((c1 != NULL) && (c2 !=NULL))
    {
        if (r->prev ==NULL)
        {
            r = c1;
            l2->first = r;
        }
        else
        {
            r->next = c1;
            r->next->prev = r;
        }
        
        c1 = c1->next;
        r->next = c2;

        r->next->prev = r;
        c2 = c2->next;
        r = r->next;
        
        while (c2!=NULL)     //??
        {
            r->next = c2;
            r->prev->next = r;
            c2 = c2->next;
            r=r->next;
        }
        
        while (c2!=NULL)
        {
            r->next = c2;
            r->next->prev =r;
            c2 = c2->next;
            r=r->next;
        }
        
    }
    
}