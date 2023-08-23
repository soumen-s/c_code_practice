// Program to print the power of a number n using recursion
// Method- 1 (large space & time complexity)
#include <stdio.h>

int result = 1;
//int recordB = b;    because we can not assign a value from outside a function
int power(int a, int b, int recordB)
{
	if (b==0)
	{
		printf ("\n%d raised to the power %d is: %d ", a, recordB, result);
		return 1;
	}
	result = result * a;
	power(a,b-1,recordB);
	return result;
}

int main()
{
	int a,b;
	
	printf ("\nEnter the base: ");
	scanf("%d", &a);
	
	printf ("Enter the power: ");
	scanf("%d", &b);
	
	int recordB = b;
    
    power(a,b,recordB);    // passing the value of b, for printng purpose

	return 0;
}
