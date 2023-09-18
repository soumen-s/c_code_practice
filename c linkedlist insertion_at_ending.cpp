#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
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
        newnode->next = NULL;
        
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;  // indicates last node
        }
        
    }
    
    node* endnode;
    endnode = (node*)malloc(sizeof(node));
    temp->next = endnode;  // assigning the address of endnode to the address of the last node
    temp = endnode;  // now endnode can be declared as temp as the lastnode
    
    printf ("\nEnter the data you want to put at the end: ");
    scanf ("%d", &endnode->data);  // or temp->data

    endnode->next = NULL;  // declearing NULL to the ending
    
    while (head != NULL)
    {
        printf ("Data: %d\n", head->data);
        head = head->next;
    }

    
  return 0;    
}
