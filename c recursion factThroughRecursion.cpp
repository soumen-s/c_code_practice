// program to print factorial of a number through recursion without using for loop
#include <stdio.h>

int factorial(int x)
{
	if (x==1) return 1; // Base case- for ending the recursion loop
	return x*factorial(x-1);  // recursive call
}
int main()
{
	int n;
	printf ("\nEnter a number: ");
	scanf ("%d", &n);
	
	int fact = factorial(n);
	printf ("\nFactorial of %d is: %d", n, fact);
	
   return 0;	
}
