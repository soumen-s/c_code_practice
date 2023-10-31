#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int data;
    struct Node* next;
} node;

void create(node **s) 
{
    int size;
    printf("\nEnter the size of the stack: ");
    scanf("%d", &size);

    (*s) = (node*)malloc(size * sizeof(node));
}

node *push(node *top, int value) 
{
    node* newnode = (node*)malloc(sizeof(node));
    if (newnode == NULL) 
    {
        printf("\nStack Overflow\n");
        return top;
    }
    newnode->data = value;
    newnode->next = top;
    top = newnode;
    return top;
}

int pop(node **top) 
{
    if (*top == NULL) 
    {
        printf("\nStack Underflow\n");
        return -1;
    }
    node *ptr = *top;
    int x = ptr->data;
    *top = ptr->next;
    free(ptr);
    return x;
}

void display(node *s) 
{
    printf("\nAll the elements are: \n\n");
    node *current = s;
    while (current != NULL) 
    {
        printf(" | %d |\n", current->data);
        current = current->next;
    }
    printf(" ------\n");
}

int main() 
{
    node *top = NULL;

    static int choice = 0;
    printf("\nThe operations are:\n1)PUSH\n2)POP\n3)DISPLAY");

    do 
    {
        int n, value; 
        printf("\n\nEnter your choice: ");
        scanf("%d", &n);
        
        switch(n) 
        {
            case 1:
                printf("\nEnter the stack element: ");
                scanf("%d", &value);
                top = push(top, value);
                break;
            case 2:
                printf("\nThe popped element is: %d", pop(&top));
                break;
            case 3:
                display(top);
                break;
            default:
                printf("\nERROR!!");
        }

        printf("\nDo you want to proceed this code: ");
        scanf("%d", &choice);

    } while (choice == 1);

    return 0;
}
