// Program to reverse a stack using defined push and pop operations
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int* createStack(int size) 
{
    int *stack = (int*)malloc(size * sizeof(int));
    return stack;
}

void push(int *stack, int *top, int item) 
{
    if (*top == MAX_SIZE - 1) 
    {
        printf("Stack is full\n");
        return;
    }
    
    (*top)++;
    stack[(*top)] = item;
}

int pop(int *stack, int *top) 
{
    if (*top == -1) 
    {
        printf("Stack is empty\n");
        return -1;
    }
    int item = stack[(*top)];
    (*top)--;
    return item;
}

void push_to_bottom(int *stack, int *top, int item) 
{
    if (*top == -1) 
    {
        push(stack, top, item);
    } 
    else 
    {
        int temp = pop(stack, top);
        push_to_bottom(stack, top, item);
        push(stack, top, temp);
    }
}

void reverse_Stack(int *stack, int *top) 
{
    if (*top == -1) 
    {
        return;
    } 
    else 
    {
        int temp = pop(stack, top);
        reverse_Stack(stack, top);
        push_to_bottom(stack, top, temp);
    }
}

int main() 
{
    // int size;
    // printf("Enter the size of the stack: ");
    // scanf("%d", &size);

    int *stack = createStack(MAX_SIZE);
    int top = -1;

    // int num;
    // printf("Enter the number of elements to push onto the stack: ");
    // scanf("%d", &num);
    
    // if (num > size) 
    // {
    //     printf("Number of elements to push exceeds stack size.\n");
    //     return 1;
    // }
    
    printf("\nEnter %d elements to push onto the stack randomly:\n", MAX_SIZE);
    for (int i = 0; i < MAX_SIZE; i++) 
    {
        int element;
        printf ("Enter element %d: ",i+1);
        scanf("%d", &element);
        push(stack, &top, element);
    }
    
    printf("Original Stack: ");
    for (int i = 0; i <= top; i++) 
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
    
    reverse_Stack(stack, &top);
    
    printf("Reversed Stack: ");
    for (int i = 0; i <= top; i++) 
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
    
    free(stack);
    return 0;
}

