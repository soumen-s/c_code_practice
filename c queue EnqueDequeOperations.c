// program to write a code to perform enqueue and dequeue operations for a fixed array
#include <stdio.h>
#include <stdlib.h>

int max = 10;  // fixed
int queue_arr[10];
int front = -1;
int back = -1;

void enqueue(int data)
{
    if (back == max - 1)
    {
        printf("\nQueue Overflow !!");
        exit(1);
    }
    
    back++;
    queue_arr[back] = data;
}

void dequeue(int i)
{
    if (back == front)
    {
        printf("\nQueue Underflow !!");
        exit(1);
    }
    
    queue_arr[i] = 0;
    front++;
    
}

int display(int front, int back)
{
    //printf ("\nAfter dequeuing %d elements, the stack is: ",n2);
    for (int i=front+1; i<=back; i++)
    {
        printf ("%d ", queue_arr[i]);
    }	
}

int main()
{
    int n,n2;
    printf ("\nHow many elements do you want to enqueue in queue: ");
    scanf ("%d", &n);
    
    for (int i=0; i<n; i++)
    {
        int data;
        printf ("Enter data %d: ",i+1);
        scanf("%d", &data);
        enqueue(data);
    }
    
    int check;
    printf ("\nDo you want to dequeue elements? (enter 0/1): ");
    scanf ("%d", &check);
    
    if(check == 0)
    {
        printf("\nOk. So after enqueuing %d elements, the queue is: ",n);
        display(front,back);
        exit(1);
    }
    else
    {
        printf ("\nHow many elements do you want to dequeue: ");
        scanf("%d", &n2);
        
        for (int i=0; i<n2; i++)
        {
            dequeue(i);
        }
        
    }
    
    printf ("\nAfter dequeuing %d elements, the queue is: ",n2);
    display(front,back);
    
  return 0;    
} 
