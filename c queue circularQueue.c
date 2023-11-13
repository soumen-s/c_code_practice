#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}node;

node *front = NULL;  // the ways to link
node *rear = NULL;

void enqueue(node **front,node **rear)
{
    node *newnode = (node*)malloc(sizeof(node));
    
    if(newnode == NULL)
    {
        printf("\nQueue Overflow!!");
    }
    
    printf("\nEnter the data : ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    
    if(*front == NULL)
    {
        *front = newnode;
        *rear = newnode;
    }
    else
    {
        (*rear)->next = newnode;
        *rear = newnode;
    }
}

int dequeue(node **front,node **rear)
{
    node *ptr;
    int x = 0;
    
    if(*front == NULL)
    {
        printf("\nQueue Unerflow!!");
    }
    else
    {
        ptr = *front;
        x = ptr->data;
        (*front) = (*front)->next;
        free(ptr);
    }
  return x;
}

void display(node *front)
{
    printf("\nAll the Queue element : ");
    while(front != NULL)
    {
        printf("%d->",front->data);
        front = front->next;
    }
   printf("NULL\n");
}

int main()
{
 printf ("\nThe operations are: \n1)ENQUEUE\n2)DEQUEUE\n3)DISPLAY\n");
 int choice = 0;
 
 do
 {
     int n,a=0;
     printf("\nEnter the Operation number : ");
     scanf("%d",&n);
     
     switch(n)
     {
         case(1):
          enqueue(&front,&rear);
         break;
         
         case(2):
         a = dequeue(&front,&rear);
         if(a>0)
         printf("\nThe deleting element is : %d\n",a);
         break;
         
         case(3):
         display(front);
         break;
         
         default:
         printf("ERROR!!\n");
     }
     
     printf("\nDo you want to proceed this code : ");
     scanf("%d",&choice);
     
 }while(choice == 1);
 return 0;
}
