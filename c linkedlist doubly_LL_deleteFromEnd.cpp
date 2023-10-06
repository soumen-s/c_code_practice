// Program to delete an element from the end of a doubly linked list
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
    
    node* ptr1 = head;
    node* ptr2 = head->next;
    
    while(ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    
    ptr1->next = NULL;
    temp = ptr1;
    free(ptr2);
    
    //--------------------------------------------------    
    
    printf("\nAfter deleting the end node...");
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
