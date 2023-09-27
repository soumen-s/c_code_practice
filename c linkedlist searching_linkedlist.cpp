// Program to search position of a data in linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
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
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        
    }
    
    int value,count=1;
    printf ("\nEnter the data you want to search: ");
    scanf("%d", &value);
    
    while (head != NULL)  // grabing the whole linked list
    {
        if (head->data == value)   // comparing
        {
            printf("\n%d is found at position- %d.", value, count);
            break;       // when matched
        }
        head = head->next;    // while not matching, then it will proceed
        count++;  // for counting position
    }
    
  return 0;    
}
