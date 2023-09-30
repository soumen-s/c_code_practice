// Program to traverse doubly linked list in both forward and backward direction(through function)
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	struct Node *prev;
    int data;
    struct Node *next;
}node;

// // prototype declarations
// void create(node* head,node* temp,int n);
// void displayBackward(node* temp);
// void displayForward(node* head);

void displayForward(node* head)
 {
    while(head != NULL){
        printf("%d -> ",head->data);
        head = head->next;
    }
    printf("NULL\n");
 }

//------------------------------------------------

void displayBackward(node* temp)
  {
    while(temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
  }

//------------------------------------------------

void create(node* head,node* temp,int n)
 {
    for(int i = 1; i <= n; i++)
    {
        node* newnode = (node*)malloc(sizeof(node));
        printf("Enter the Data %d: ",i);
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if(head==NULL)
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
    
    printf ("\nForward traversing: ");
    displayForward(head);
    printf ("\nReverse traversing: ");
    displayBackward(temp);
    
 }    
    
//------------------------------------------------

int main() 
{
    int n;
    printf("Enter the size of the doubly linked list: ");
    scanf("%d",&n);
    node* head = NULL;
    node* temp = NULL;
    create(head,temp,n);
    
    return 0;
}
