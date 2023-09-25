// Program to traverse the elements of a circular linked list
#include <stdio.h>
#include <stdlib.h> 

typedef struct node
{
    int data;
    struct node* next;
}node;

int main()           // circular linked list
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
        
        printf ("Enter data %d: ",i+1);
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
    temp->next == head;   // circularly connected
    while (temp->next != head)
    {
        printf ("Data: %d\n", head->data);  
        head = head->next;
    }
    
  return 0;    
}
