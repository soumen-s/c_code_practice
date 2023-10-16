//C program to sort a given stack using another stack.
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int sorted_Stack[MAX_SIZE];
int top = -1;

void push(int data) 
{
    if (top == MAX_SIZE - 1) 
    {
        printf("Overflow stack!\n");
        return;
    }
    top++;
    stack[top] = data;
}

int pop() 
{
    if (top == -1) 
    {
        printf("Empty Stack!\n");
        return -1;
    }
    int data = stack[top];
    top--;
    return data;
}

void sort_stack()  // for sorting purpose
{
    int temp;
    int sortedTop = -1;

    while (top != -1) 
    {
        temp = pop();
        while (sortedTop != -1 && sorted_Stack[sortedTop] < temp) 
        {
            push(sorted_Stack[sortedTop]);
            sortedTop--;
        }
        sortedTop++;
        sorted_Stack[sortedTop] = temp;
    }

    while (sortedTop != -1)
    {
        push(sorted_Stack[sortedTop]);
        sortedTop--;
    }
}

int main() 
{
    push(1);
    push(5);
    push(2);
    push(9);
    push(4);
    push(8);

    printf("Original stack is: ");
    for (int i = 0; i <= top; i++) 
    {
        printf("%d ", stack[i]);
    }
    
    printf("\n");
    sort_stack();  // Sort the stack.

    printf("Sorted stack: ");
    for (int i = 0; i <= top; i++) 
    {
        printf("%d ", stack[i]);
    }
    printf("\n");

  return 0;
}

