// Program to print the elements in a linked list
#include <stdio.h>
#include <stdlib.h> 

typedef struct node
{
    int data;
    struct node* next;
}node;

int main()
{
    int n;
    printf ("Enter the size: ");
    scanf ("%d", &n);
    
    node* head = NULL;
    node* newnode;
    node* temp;
    
    for (int i=0; i<n; i++)
    {
        newnode = (node*)malloc(sizeof(node));
        
        printf ("Enter the data %d: ",i+1);
        scanf ("%d", &newnode->data);
        newnode->next = NULL;
        
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    
    printf ("\n");
    while (head != NULL)
    {
        printf ("Data: %d\n", head->data);  // head is using for traversing
        head = head->next;
    }
    
  return 0;    
}
