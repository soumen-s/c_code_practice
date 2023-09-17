// Program to insert a node at the begining of a linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* link;
}node;

int main()
{
    int n;
    printf ("Enter the size: ");
    scanf ("%d", &n);
    
    node* head = NULL;
    node* newnode;
    node* temp;
    
    for(int i=0; i<n; i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf ("Enter the element at node %d: ",i+1);
        scanf ("%d", &newnode->data);
        newnode->link = NULL;
        
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->link = newnode;
            temp = newnode;
        }
        
    }
    // we will insert node before the printing stage
    
    node* begnode; // begining node
    begnode = (node*)malloc(sizeof(node));
    begnode->link = head;   // the link part of begnode is pointing on that position, where head was pointing actually
    head = begnode;      // now we can assign begnode as head 
    printf ("\nEnter the data you want to put at the begining node: ");
    scanf("%d", &begnode->data);
        
     
    printf ("\nSo all data are: \n");
    while (head != NULL)
    {
        printf ("Data: %d\n", head->data);
        head = head->link;
    }
      
  return 0;    
}
