// Program to traverse doubly linked list in both forward and backward direction
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node* prev;
    int data;
    struct node* next;
}node;

int main()
{
    int n;
    printf ("Enter the size of the doubly linked list: ");
    scanf ("%d", &n);
    
    node* head = NULL;
    node* temp;
    node* newnode;
    
    for (int i=1; i<=n; i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf ("Enter data %d: ",i);
        scanf("%d", &newnode->data);
        newnode->next = NULL;   // for removing the garbage value
        newnode->prev = NULL;

        if(head == NULL)
        {
            temp = newnode;
            head = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;    // untill the newnode is not declared as temp
            temp = newnode;
        }
        
    }
    
    printf ("\nForward traversing: ");
    while(head != NULL)
    {
        printf ("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");   // for better presentation
        
        
    printf ("\nReverse traversing: ");
    while(temp != NULL)
    {
        printf ("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");   // for better presentation
    
  return 0;    
}
