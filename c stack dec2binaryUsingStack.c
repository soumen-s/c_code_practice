// Program to convert a decimal number to its binary equivalent using stack
#include <stdio.h>
#include <stdlib.h>

#define max 100  // to store a long binary number safely

typedef struct Stack 
{
    int top;
    int array[max];
}stack;

stack* newStack()  // initialization
{
    stack* st = (stack*) malloc(sizeof(stack));
    st->top = -1;
    return st;
}

void push(stack* st, int item) 
{
    if (st->top >= max - 1) 
    {
        printf("\nError: Stack full!\n");  // that's why we take a big array
        exit(1);
    }
  st->array[++st->top] = item;
}

int pop(stack* st) 
{
    if (st->top == -1)
    {
        printf("Error: Stack underflow\n");
        return -1;
    }
  return st->array[st->top--];
}

void decimal_to_binary(int decimal)   // Converting decimal to binary using stack
{
    stack* st = newStack();
    
    while (decimal > 0) 
    {
        int remainder = decimal % 2;
        push(st, remainder);
        decimal = decimal/2;
    }
    
   // To get the binary equivalent of the digits, pop them from the stack and print them
    printf("\nBinary equivalent of that number is: ");
    while (st->top != -1) 
    {
        printf("%d", pop(st));
    }
}

int main() 
{
    int decimal;
    
    printf("Input a decimal number: ");
    scanf("%d", &decimal);
    
    decimal_to_binary(decimal);
    
  return 0;
}

