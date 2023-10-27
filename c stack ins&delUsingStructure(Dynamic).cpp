// program to write a code where all operations of a stack are happening FULLY dynamically
#include <stdio.h>
#include <stdlib.h>

typedef struct stack // helps us to allocate memory dynamically
{
    int size;
    int top;
    int* arr;
}stack;

void create(stack *s)
{
    printf ("\nEnter the size of the stack: ");
    scanf("%d", &s->size);
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));
}

void push(stack *s)
{
    
    if(s->top == s->size - 1)
    {
        printf("\nStack Overflow !!");
        exit(1);
    }
    s->top++;
    
    printf("\nEnter the data: ");
    scanf("%d", &s->arr[s->top]);
}

int pop(stack *s)
{
    if(s->top == -1)
    {
        printf("\nStack Underflow !!");
        exit(1);
    }
    
    int dlt_val = s->top;
    s->top --;
    return dlt_val;
}

int peak(stack s, int pos)
{
    if(s.top-pos+1 < 0)
    {
        printf("\nOutside of the stack \n");
    }
    int grab = s.arr[s.top-pos+1];  // as we does not send the arguments as an address form
    return grab;
}

void display(stack s)
{
    printf("\nAll the elements are: ");
    for (int i = s.top; i>=0; i--)
    {
        printf (" | %d |\n", s.arr[i]);
    }
    printf (" ------\n");
    
}

int main()
{
    stack st;
    create(&st);
    
    static int choice = 0;
    printf ("\nThe operations are:\n1)PUSH\n2)POP\n4)PEAK\n3)DISPLAY");
    
    do
    {
        int n,pos;
        printf("\n\nEnter your choice: ");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
            push(&st);
            break;
            
            case 2:
            printf ("\nThe popped element is: %d",pop(&st));
            break;
            
            case 3:
            printf("\nEnter the position you want to peak: ");
            scanf("%d", &pos);
            printf("\nThe peaked element from position %d is : %d", pos, peak(st,pos));
            break;
            
            case 4:
            display(st);
            break;
            
            default:
            printf("\nERROR!!");
        }
        
        printf("Do you want to proceed this code : ");
        scanf("%d",&choice);
        
    }while (choice == 1);
    
  return 0;    
}
