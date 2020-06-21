#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct node
{
    int value;
    int key;

    struct node *next;
    struct node *prev;
};

typedef struct node node_t;

node_t *head = NULL;
node_t *last = NULL;

bool isEmpty()
{
    return head == NULL;
}

int checkLength()
{
    int length = 0;
    node_t *current;
    for (current = head; current != NULL; current->next)
    {
        length++;
    }

    return length;
    
}

void insertFirst(int key, int value)
{
    node_t *npt = (struct node *)malloc(sizeof(node_t));
    npt->key = key;
    npt->value = value;

    if (isEmpty())
    {
        last = npt;
    }
    else
    {
        head->prev = head;
    }
    
    npt->next = head;
    head = npt;
    
}


int main()
{
    printf("Double Linked List\n");


}