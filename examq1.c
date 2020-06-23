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

void f1(list l, void *o)
{
	node n;

	n = (node)malloc(sizeof(struct node_int));

	n->data = o;
	n->next = NULL;

	while (l->first->next != NULL)
	{
		l->first = l->first->next;
	}

	l->first->next = n;
