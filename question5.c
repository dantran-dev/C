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
    cp = (struct collection*)malloc(sizeof(collection));
    

}

void add_marble(collection c, marble m)
{
    

}