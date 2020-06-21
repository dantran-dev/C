#include <stdio.h>
#include <stdlib.h>


struct node
{
    int value;
    struct node *next;
    struct node *prev;
};

typedef struct node node_t;

node_t *head;


void insertAtHead(int value)
{

    node_t *newFrontNodePT = (struct node*)malloc(sizeof(node_t)); //create a new node

    if (head == NULL)
    {
        head = newFrontNodePT;
       
    }
    
    newFrontNodePT->value = value;  //set value for the node
    newFrontNodePT->prev = NULL;    //get the next node address acknowledge
    newFrontNodePT->next = NULL;    //get the previous node address acknowledge

    head->prev = newFrontNodePT;
    newFrontNodePT->next = head;

    head = newFrontNodePT;          //now the new node becomes head

}

void insertAtEnd(int value)
{
    node_t *newEndNodePT = (struct node*)malloc(sizeof(node_t));
    node_t *temp = head;

    if (head==NULL)
    {
        head = newEndNodePT;
        
    }

    while (temp->next !=NULL)  //go the the last node
    {
        temp = temp->next;
    }

    temp->next = newEndNodePT;
    newEndNodePT->prev = temp;
}

void printList()
{
    node_t *temp = head;
    printf("Print from front to end of the list: \n");
    while (temp!=NULL)
    {
        printf("-%d-", temp->value);
        temp = temp->next;
    }
    printf("n");
    
}


int main()
{
    head = NULL;
    for (int i = 1; i < 10; i++)
    {
        insertAtEnd(i);

    }
    
    printList();

}