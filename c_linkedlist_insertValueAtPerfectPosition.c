// Program to insert a node to its appropriate position in a sorted linked list 

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;

node* head = NULL;
node* temp;
    
int main()
{
    int n;
    printf("Enter size of the linked list: ");
    scanf("%d", &n);
    
    node* newnode;

    for(int i=0; i<n; i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf( "Enter data%d : ",i+1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        
        if(head == NULL)
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
  
    node* keyvalue = (node*)malloc(sizeof(node));
    
    printf("\nEnter data u wanna insert on its perfect place: ");
    scanf("%d", &keyvalue->data);
    
    // again i've to use malloc for that key and link it
    
    node* ptr1 = head;
    node* ptr2 = head->next;
 
    while(ptr1->next != NULL && ptr1->next->data < keyvalue->data)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    
    ptr1->next = keyvalue;
    keyvalue->next = ptr2;
    
    
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
  return 0;    
}
