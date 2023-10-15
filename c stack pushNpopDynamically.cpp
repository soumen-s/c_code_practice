// program to apply push or pop operations in a stack dynamically
#include <stdio.h>
#include <stdlib.h>

int max = 10;
int stack_arr[10]; // declared max stack size previously
int top = -1;

void push(int n)
{
    if(top == max-1)
    {
        printf ("Stack Overflow !");
        exit(1);
    }
    top = top + 1;
    stack_arr[top] = n;
}

int pop()  // no arguments needed
{
    int dlt_value;
    if(top == -1)
    {
        printf("Stack Underflow !");
        exit(1);  // means abnormal termination of the program
    }
    dlt_value = stack_arr[top];
    top = top - 1;
    return dlt_value;
}

void printing()
{
    for (int i=top; i>=0; i--)  // it will print the values in the sequences according to it was inserted
    {
        printf ("%d\n", stack_arr[i]);
    }
}

int main()
{
    int count1;
    int count2;
    int ask = 0;
    
    printf ("\nIn the stack, Maximum memory allocated for %d elements...\n",max);
    printf ("\nHow many elements do you want to push: ");
    scanf("%d", &count1);
    
    printf ("\n");
    for (int j=0; j<count1; j++)
    {
        int data;
        printf("Push element %d: ", j+1);
        scanf("%d", &data);
        push(data);
    }
    
    printf ("\nAfter pushing %d elements, the stack is: \n",count1);
    printing();
    
    printf("\nDo you want to pop any element? (enter 0/1) : ");
    scanf("%d", &ask); 
    
    if(ask == 0)
    {
        printf ("\nOk.\n");
        exit(1);
    }
    else
    {
        printf("\nHow many elements do you want to pop: ");
        scanf("%d", &count2);
        
        for (int k=0; k<count2; k++)
        {
            pop();
        }
    }
    
    printf ("\nAfter poping %d elements, the stack is: \n",count2);
    printing();
    
  return 0;    
}
