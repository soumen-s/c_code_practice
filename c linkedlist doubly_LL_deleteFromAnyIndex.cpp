// Program to delete an element from any position of a doubly linked list
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
    
    //------------------------------------------------------------
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
      ptr2->next->prev = ptr1;  // reversly pointing the third pointer to the first pointer
      free(ptr2);
    
    //------------------------------------------------------------
    
    printf("\nAfter deleting the %dth node...", x);
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
