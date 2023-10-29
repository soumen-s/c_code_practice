// program to write a code where all operations of a queue are excecuting FULLY dynamically
#include <stdio.h>
#include <stdlib.h>

typedef struct queue      // DRAWBACK of array implementation of queue ~ 
{                           // In case of queue, there are two pointers. One is front and another is back. When we will insert a 
    int size;               // element in it, the back pointer will proceed by 1. And after proceeding upto max size, then if we
    int front;              // wish to dequeue some elements, then the front pointer will proceed by 1 and element can be deleted 
    int back;               // according to our requirement. But when we try to refill the queue with some new elements to 
    int *queue_arr;         // that free space, than that will not happen. This is beacuse both of the pointers are set to move only
}queue;                     // in one direction, so the back pointer is already set on its max position, and the front will also set 
                            // on a particular position after dequeues, so the pointers will not move further and we cant use that 
void create(queue *q)       // free space. So the queue is set as a filled queue. This is that drawback...
{
    printf ("\nEnter the size of the queue: ");
    scanf ("%d", &q->size);
    q->front = -1;
    q->back = -1;
    
    q->queue_arr = (int*)malloc(q->size * sizeof(int));
}

void enqueue(queue *q)
{
    if (q->back == q->size - 1)
    {
        printf("\nQueue Overflow !!");
        exit(1);
    }
    
    q->back++;
    printf("\nEnter the data: ");
    scanf("%d", &q->queue_arr[q->back]);
}

int dequeue(queue *q)
{
    if (q->back == q->front)
    {
        printf("\nQueue Underflow !!");
        return 0;
    }
    q->front++;
    int x = q->queue_arr[q->front];
    return x;
}

void display(queue q)
{
    printf("All the Queue elements are : ");
    for(int i = q.front+1; i<=q.back; i++){
        printf("%d ",q.queue_arr[i]);
    }
}

int main()
{
   queue q;
   create(&q);
   
   printf ("\nThe operations are: \n1)ENQUEUE\n2)DEQUEUE\n3)DISPLAY\n");
   
   static int n = 0;
   int choice;
   
   do
   {
       printf("\nEnter your choice: ");
       scanf("%d", &n);
       
       switch(n)
       {
           case 1:
           enqueue(&q);
           break;
           
           case 2:
           printf("The dequeue element is : %d\n",dequeue(&q));
           break;
           
           case 3:
           display(q);
           break;
           
           default:
           printf("\nERROR !!");
       }
       
       printf("Do you want to proceed this code : ");
       scanf("%d",&choice);
       
   }while(choice == 1);
   
  return 0;    
} 
