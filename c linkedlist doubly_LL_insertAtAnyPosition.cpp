// Program to insert an element (AT ANY POSITION / BEFORE A nTH NODE) of a doubly linked list
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
        printf("Enter data %d: ",i);
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
    
    int x;
    printf ("\nEnter the position you want to insert a node: ");
    scanf("%d", &x);
    
    node* ptr1 = head;
    node* ptr2 = head->next;
    
    for (int i=1; i<x-1; i++)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    
    node* anynode = (node*)malloc(sizeof(node));
    printf ("\nEnter the data you want to insert at %dth position: ",x);
    scanf("%d", &anynode->data);
    
    ptr1->next = anynode;
    anynode->prev = ptr1;
    ptr2->prev = anynode;
    anynode->next = ptr2;
    
    //--------------------------------------------------    
    
    printf("\nForward Traversing: ");
    while(head != NULL)
    {
        printf ("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
        
    printf("\nReverse Traversing: ");
    while(temp != NULL)
    {
        printf ("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
  return 0;
}
