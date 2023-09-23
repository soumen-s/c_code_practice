// Program to delete the nth node of a linked list
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
    node* newnode;
    
    for (int i=0; i<n; i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf("Enter data %d: ", i+1);
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
    
    // Deleting the nth node
    int x;
    printf("\n\nEnter the node no. you want to delete: ");
    scanf("%d", &x);
    
    node* ptr1 = head;
    node* ptr2 = head->next;
    
    for (int i=0; i<x-2; i++) 
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    
      ptr1->next = ptr2->next;  // interconnecting ptr1, ptr2, and (ptr2 next), for removing the mid part
                                // ptr1 is now pointing ptr2->next(the node after ptr2)
      free(ptr2);
    
    printf ("\nAfter deleting the %dth node, the elements are: ",x);
    display(head);
    
  return 0;
}

