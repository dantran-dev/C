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

void splice(list* l1, list l2, list l3)
{
	dnode c1;
	dnode c2 = l2->first;
	dnode c3 = l2->first;     // dnode c3 = l3->first

	*l1 = (list)malloc(sizeof(list));  // l1 = (list)malloc(sizeof(list))
	*l1->first = NULL;       // l1->first = NULL

	while ((c2 != NULL) || (c3 != NULL))
	{
		if (c2 != NULL)
		{
			if (c1 == NULL)
			{
				(*l1)->first = c2; // (*l1)->first = c2->next->next;
				c1 = (*l1)->first;
			}
			else
			{
				c1->next = c2; //c1->next =
				c2->prev = c1;
				c1 = c2;
				c2 = c2->next;
				if (c2 != NULL)
				{
						c2 = c2->next;
				}
			}
			}

		if (c3 != NULL)
		{
			if (c1 == NULL)
			{
				(*l1)->first = c3;
				c1 = (*l1)->first;
			}
			else
			{
				c1->next = c3;
				c3->prev = c1;
				c1 = c3;
				c3 = c3->next;
				if (c3 != NULL)
				{
					c3 = c3->next;
				}
		}
	}
	c1 = NULL; // c1=c1->next
}
} 
