// program to write a code where the Queue is connecting in a circular way.
/* In this code we will initialize front and rear indexs with 0. and the first position will always 
   contain a NULL value. This is becaues of the indexing calculation. Through that calculation, we 
   can calculate the index number as we needed specially for circular activity. */
#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{
	int size;
	int front;
	int rear;
	int *arr;
}queue;

void create(queue *q)
{
	printf("\nEnter the size of the queue : ");
	scanf("%d",&q->size);
	
	q->front = 0;
	q->rear = 0;
	
	q->arr = (int*)malloc(q->size * sizeof(int));
}

void enqueue(queue *q)
{
	if((q->rear+1)%q -> size == q -> front)
	{
		printf("\nQueue is Full!\n");   // if front points after the rear's position, then that will
	}                                   // be the condition of queue full.
	else
	{
		q->rear = (q->rear+1) % q->size;  // to increment the index by 1 (made for circular purpose)
		printf("\nEnter the Queue element : "); 
		scanf("%d",&q->arr[q->rear]);
	}
}

int dequeue(queue *q)
{
	if(q->front == q->rear)
	{
		printf("\nQueue is Empty!\n");
		exit(1);
	}
	else
	{
		q->front = (q->front+1) % q->size;
		int x = q->arr[q->front];
		printf ("\nThe dequeued element is: %d", x);
	}
}

void display(queue q)
{
	printf("\nAll the Queue elements are : ");
	for( int i = q.front+1; i != (q.rear+1) % q.size; i = (i+1) % q.size )
	{
		printf("%d ", q.arr[i]);
	}
  printf("\n");
}

int main()
{
	queue qu;
	create(&qu);
	
	int choice = 0;
	
	printf ("\nThe operations are: \n1) ENQUEUE\n2) DEQUEUE\n3) DISPLAY\n");
	
	do
	{
		int num;
		printf("\nEnter the Operation number : ");
		scanf("%d",&num);
		switch(num){
		case(1):
			enqueue(&qu);
			break;
		case(2):
			dequeue(&qu);
			break;
		case(3):
			display(qu);
			break;
		default:
			printf("\nERROR !!\n");
		}
		
		printf("\nDo you want to proceed this code : ");
		scanf("%d",&choice);
		
	}while(choice == 1);
	
  return 0;
}
