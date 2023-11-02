// program to write a code of Queue using the linked list implementation FULLY dynamically
#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int data;
    struct Node* next;
} Node;

typedef struct Queue 
{
    Node* front;
    Node* rear;
} Queue;

void create(Queue* q) 
{
    q->front = NULL;
    q->rear = NULL;
}

void enqueue(Queue* q, int data) 
{
    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = NULL;

    if (q->rear == NULL) 
    {
        q->front = newNode;
        q->rear = newNode;
    } 
    else 
    {
        q->rear->next = newNode;
        q->rear = newNode;
    }
  printf("Enqueued: %d\n", data);
}

int dequeue(Queue* q) 
{
    if (q->front == NULL) 
    {
        printf("Queue is empty.\n");
        return -1; 
    }

    int data = q->front->data;
    Node* temp = q->front;

    if (q->front == q->rear) 
    {
        q->front = NULL;
        q->rear = NULL;
    } 
    else 
    {
        q->front = q->front->next;
    }

    free(temp);
    return data;
}

void display(Queue q) 
{
    if (q.front == NULL) 
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("All the Queue elements are: ");
    Node* current = q.front;
    while (current != NULL) 
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() 
{
    Queue q;
    create(&q);

    printf("The operations are:\n1) ENQUEUE\n2) DEQUEUE\n3) DISPLAY\n");

    int choice;
    do 
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter the data: ");
                int data;
                scanf("%d", &data);
                enqueue(&q, data);
                break;

            case 2:
                if (q.front == NULL) 
                {
                    printf("Queue is empty. Dequeue operation failed.\n");
                } else {
                    printf("Dequeued element is: %d\n", dequeue(&q));
                }
                break;

            case 3:
                display(q);
                break;

            default:
                printf("Invalid choice.\n");
        }

        printf("Do you want to proceed the code?(1/0) : ");
        scanf("%d", &choice);

    } while (choice == 1);

    return 0;
}

