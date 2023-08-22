// Program to print the nth fibonacci number from the fibonacci series.
#include <stdio.h>

int fibonacci (int n)
{                      
    
	if (n==1 || n==2)  return 1;  // initializing the 1st & 2nd term with 1
	
	int ans1 = fibonacci(n-1);  // (target number - 1)
	int ans2 = fibonacci(n-2);  // (target number - 2)
	
	int add = ans1+ans2;
	
	//fibonacci (n-1);
	return add;
}

int main()       // Fibonacci series- 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
{
   int n;
   
   printf ("\nEnter the length of the fibonacci series: ");
   scanf ("%d", &n);
   
   printf ("\nThe %dth fibonacci number is: %d ",n ,fibonacci(n));
  return 0;
}
