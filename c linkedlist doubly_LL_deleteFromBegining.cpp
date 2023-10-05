// Program to delete an element from the begining of a doubly linked list
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
    scanf("%d", &n);
    
    node* head = NULL;
    node* temp;
    node* newnode;
    
    for(int i=1; i<=n; i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf ("Enter data %d: ", i);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else 
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
    
    //--------------------------------------------------
    
    node* p = head;
    head = head->next;
    head->prev = NULL;
    free(p);
    
    //--------------------------------------------------    
    
    printf("\nAfter deleting the first node...");
    printf("\nForward Traversing: ");
    while(head != NULL)
    {
        printf ("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL");
        
    printf("\nReverse Traversing: ");
    while(temp != NULL)
    {
        printf ("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
    
  return 0;    
}
