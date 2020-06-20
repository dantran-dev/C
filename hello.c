#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

struct node
{
    int value;
    struct node *next;
};

typedef struct node node_t;

node_t *head;
node_t *curr;

node_t *createList(int value)
{

    node_t *ptr = (struct node*)malloc(sizeof(node_t));
    if (ptr == NULL)
    {
        printf("Node creation failed \n");
        return NULL;
    }

    ptr->value = value;
    ptr->next = NULL;
    head = curr = ptr;
    return ptr;

}


node_t *addToEnd(int value)
{
    node_t *ptr = (struct node*)malloc(sizeof(node_t));

    if (head == NULL)
    {
        return (createList(value));
    }

    if (ptr ==NULL)
    {
        printf("Node creation failed");
    }

    ptr->value = value;
    ptr->next = NULL;
    /*
    * Update the address of the previous node equal to new node
    * Set the new node is the current node for the next move
    */
    
    curr->next = ptr;
    curr = ptr;
    return ptr;
    
}


node_t *addToFront(int value)
{

    node_t *ptr = (struct node*)malloc(sizeof(node_t));
    ptr->next =head; // link the new node in front to the head
    head = ptr;      // set the head is the new node

    return ptr;


}

void printList(void)
{
    node_t *ptr = head;
    printf("\n -- The List -- \n");

    while (ptr != NULL)
    {
        printf("-%d", ptr->value);
        ptr = ptr->next;
    }

    printf("\nList End\n");

    return;
    
}


int main()
{   

    int i =0, ret = 0;

    node_t *ptr = NULL;

    for ( i = 5; i < 20; i++)
    {
        addToEnd(i);
    }

    printList();
    
    return 0;

    
}