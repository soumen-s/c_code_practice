// program to represent a fixed size stack implementation 
#include <stdio.h>
int MAXSIZE = 8;
int stack[8];    // Declaring the size of stack
int top = -1;

// Check if the stack is full or not
int isFull()
{
   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

// Insertion into the stack
int push(int data)
{
   if(!isFull())  // if size checking not returns false
   { 
      top = top + 1; // increments top to point next empty space
      stack[top] = data;  // adds data element to the stack location, where top is pointing.
   } 
   else 
   {
      printf("Stack is full, Could not insert data.\n");
   }
}

int main()
{
  // inserting elements
   push(44);
   push(10);
   push(62);
   push(123);
   push(15);
   
   printf("Stack Elements: \n");
   
   for(int i = 0; i < 8; i++) 
   {
      printf("%d ", stack[i]);  // rest of the elements will be treated as zero
   }
  return 0;
}
