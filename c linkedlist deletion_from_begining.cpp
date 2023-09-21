// Program to delete the first element of a linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;

void display(node* ptr);
void display(node* ptr)
{
    while(ptr != NULL)
    {
       printf ("%d ", ptr->data);
       ptr = ptr->next;
    }   
}

int main()
{
    int n;
    printf ("Enter no. of nodes: ");
    scanf ("%d", &n);
    
    node* head = NULL;
    node* temp;
    
    for (int i=0; i<n; i++)
    {
        node* newnode;
        newnode = (node*)malloc(sizeof(node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        
        if (head == NULL)
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
    
    printf ("\nBefore deleting the elements are: ");
    display(head);
    
    // Deleting the first node
    node* hold;
    hold = head;  // holding the address of head for deleting later
    head = head->next;  // proceeding in the list, so that the head grab it's next position
    free(hold);  // freeing the pointer address, not the actual one.
    
    printf ("\n\nAfter deleting the first node, the elements are: ");
    display(head);
    
  return 0;
}

