// Program to delete the last node of a linked list
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
    
    printf ("\nBefore deleting, the elements are: ");
    display(head);
    
    // Deleting the last node
    node* ptr1 = head;
    node* ptr2 = head->next;
    
    while(ptr2->next != NULL)
    {
    	ptr1 = ptr1->next;
    	ptr2 = ptr2->next;
	}
	
	ptr1->next = NULL;
	free(ptr2);
    
    printf ("\n\nAfter deleting the last node, the elements are: ");
    display(head);
    
  return 0;
}

