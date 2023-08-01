// A program to SWAP numbers using function without the help of 3rd variable

#include <stdio.h>

int swap(int x, int y)
{
   y = y-x;
   x = x+y;           
   y = x-y;
	printf ("\nThe value of A is: %d", x);
    printf ("\nThe value of B is: %d", y);	
}

int main()
{
   int a,b;	
   printf ("\nEnter a number for A: ");
   scanf ("%d", &a);	
   
   printf ("\nEnter a number for B: ");
   scanf ("%d", &b);
   
   swap (a,b);	
   
   return 0;	
}
