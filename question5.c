#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <node.h>

typedef enum {plain, swirled,cats_eye}content;
typedef enum {glass,wooden,plastic} material;

struct marble_int
{
    double diamter;
    content look;
    material made_of;
    bool new;
};
typedef struct marble_int *marble;


typedef struct 
{
    char *name;
    collection marbles;
}member;

//Question 5e1
typedef node members;     
typedef node collection;

members club;

void init_marble(marble *mp, double d, content c, material t, bool n);

double get_diameter(marble m);
material get_look(marble m);
content get_material(marble m);
bool get_age(marble m);
void set_diameter(marble m, double d);
void set_look(marble m, content c);
void set_material(marble m, material t);
void set_age(marble m, bool n);
char *to_string(marble m);

int main()
{


}

//5e2

void init_collection(collection *cp)
{
    cp = (collection*)malloc(sizeof(collection));
    
}

// add marble to the front of collection c

void add_marble(collection c, marble m)
{
   
    club = c->first;

    //create a node with the marble in it
    collection *marble_node;
     
  
    //create marble node with marble inside it
    init_node(&marble_node, m);

    //link the new marble node to the next node
    marble_node->next = club;

    //update the head
    club = marble_node;

    
}

void display_marbles(collection c, content k)
{

    c = club;

    //loop through collection c then find the node that has content k
    if (c==NULL)
    {
        printf("The list is empty!\n");
    }
    

    while ((c!=NULL) && (strcmp(get_look(c)= k)))
    {
        printf("%s", (char*)get_look(c));
        c = c->next;
    }
    

}

int display_range(collection c, double min_diameter, double max_diameter)
{

    c = club;

    while (c!=NULL)
    {
        if ((get_diameter(c)>=min_diameter) && get_diameter(c) <=max_diameter)
        {
            
            printf("%s \n"), (char*)get_look(c);

        }

        c = c->next;
    }
    
}

void remove(collection c)
{

 collection *temp, *prev;

 temp = c;

 int old = 0;
//if we found the old marble at the head of the node

if (temp!=NULL && get_look(temp)==0)
{       
    c = temp->next;  //change head

    free(temp);      //free old head
}


 //search for the node marble to be deleted
 // keep track of the previous node as we need to update its next address

 while (temp!=NULL && get_age(temp)!=0)
 {
     prev = temp;
     temp = get_next(temp);
 }
 //if the old marble not present in the linked list
 if (temp == NULL)
 {
     return;
 }
 
 
 //Unlink the node from the linked list

 prev->next = temp->next;
 free(temp);  //Free memory
 
}