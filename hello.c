#include <stdio.h>
#include <stdio.h>

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
        printf("-%d\n",temp->value);
        temp = temp->next;


    }
    
}

int main()
{
  
node_t n1, n2, n3;    // initialise 3 nodes
node_t *head;         //the path to the first node
/*
** Set value for each node
*/
n1.value = 18;        
n2.value = 73;
n3.value = 61;

/*Link all the node together*/

head = &n1; // access to the list by the node 3rd
n1.next = &n2;
n2.next = &n3;
n3.next = NULL;  // the end of the list

printList(head);
return 0;

}