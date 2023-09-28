// program to creat and traverse the doubly linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node    
{
    struct node* prev;   // the extra addition in doubly linked list
    int data;
    struct node* next;
}node;

int main()
{
    int n;
    printf ("Enter the size of the linked list: ");
    scanf("%d", &n);
    
    node* head = NULL;
    node* temp;
    node* newnode;
    
    for (int i=0; i<n; i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf("Enter data %d: ",i+1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
            newnode->prev = NULL;  
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        
    }
    
    printf ("\nThe total list is: ");
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    
  return 0;    
}
