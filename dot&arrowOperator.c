// Program to see when to use dot(.) operator and arrow(->) operator 
// to access the structure variables

/*
SCENARIO : When we need to dynamically allocate memory for a structure. 
In scenarios where the size of the structure is not known at compile time
or when we need to allocate memory on the heap, usage of a pointer to the 
structure allows us to dynamically allocate memory using malloc() or calloc().
*/

#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    char section;
};

// We can first declare them over there like that way or we can also declare & 
// initialize the whole object into the main.

// struct student Animesh;   //structure itself
// struct student* Rajid = NULL;   //pointer to a structure

int main()
{
    // Here we set student Animesh as a structure itself.
    struct student Animesh; 
    Animesh.roll = 69;
    printf("%d", Animesh.roll);
    
    // Here we set student Rajid as a pointer to a structure.
    struct student* Rajid = (struct student*)malloc(sizeof(struct student));
    Rajid->roll = 68;
    printf("\n%d", Rajid->roll);

    return 0;
}
