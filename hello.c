
#include <stdio.h>
#include <stdlib.h>

struct node
{
    /* data */
    int value;           // actual value will be stored in the node
    struct node *next;   // hold the address to the next pointer

};

typedef struct node node_t;

void printList(node_t *head) // accept the head as where to start with
{
    node_t *temp = head;
    while (temp!=NULL)
    {
        printf("-%d value located at the address %p\n",temp->value, &temp);
        temp = temp->next;

    }
    
}

node_t *createNewNode(int value)
{
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;

}

node_t *insertInFront(node_t *head, node_t *nodeToInsert)
{
    nodeToInsert->next = head;
    return nodeToInsert;
}

int main()
{
  
node_t *head;         //the path to the first node
node_t *temp;

for (int i = 0; i < 5; i++)
{
    temp = createNewNode(i);
    head = insertInFront(head, temp);
}


printList(head);
return 0;

}