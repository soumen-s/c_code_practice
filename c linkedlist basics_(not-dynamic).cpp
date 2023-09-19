// program to get basic knowledge about the linked list
#include <stdio.h>
#include <stdlib.h> // for malloc()

struct node  // creation of nodes
{
    int data;  // data part 
    struct node* link; // link part
};

void linkedListTraversal(struct node* ptr)
{
    while(ptr != NULL)
    {
        printf ("%d ", ptr->data);
        ptr = ptr->link;
    }
}

int main() 
{
    struct node* head;    // creating node type pointers
    struct node* second;
    struct node* third;

    head = (struct node*) malloc (sizeof(struct node));   // allocating memory for every nodes
    second = (struct node*) malloc (sizeof(struct node));
    third = (struct node*) malloc (sizeof(struct node));
    
    head->data = 15;
    head->link = second;  // linking
    
    
    second->data = 17;
    second->link = third;

    third->data = 22;
    third->link = NULL;  // ending the list
    
    // printf ("%d ", head->data);
    // printf ("%d ", second->data);
    // printf ("%d ", third->data);
    
    printf ("Data: ");
    linkedListTraversal(head);  
    
    return 0;
}
