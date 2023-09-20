// Program to insert a node at any position of a linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* link;
}node;

void display(node*p);
void insert(node *ptr);

// function for display
void display(node*h) 
{
    while (h != NULL) 
	{
       printf ("%d ",h->data);
       h = h->link;
    }
}

// function for insertion
void insert(node *ptr)
{
    int x;
    printf ("\nEnter the position you want to insert extra node: ");
    scanf("%d", &x);
    node *nthnode = (node*)malloc(sizeof(node));
    printf("Enter the data : ");
    scanf("%d",&nthnode->data);
    node *hd = ptr;
    node *prev;      // this pointer will point the previous node corresponding to the node inserting now.
    for(int i = 1; i < x; i++) {
        prev = hd;     // after complete the iteration,the pointer P point to the next node corresponding to the node inserting now.
        hd = hd->link;
    }
    prev->link = nthnode;  // that means it captures the exact location
    nthnode->link = hd;  // to proceed the listing
    printf("\nAfter assigning the newnode : ");
    display(ptr);
}

int main()
{
    int n;
    printf ("Enter the size: ");
    scanf ("%d", &n);
    
    node* head = NULL;
    node* newnode;
    node* temp;
    
    for(int i=0; i<n; i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf ("Enter the element at node %d: ",i+1);
        scanf ("%d", &newnode->data);
        newnode->link = NULL;
        
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->link = newnode;
            temp = newnode;
        }
        
    }
    printf("\nDisplay LINKED LIST : ");
    display(head);
    insert(head);
  return 0;    
}
