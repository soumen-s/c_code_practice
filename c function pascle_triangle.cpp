// Program to print Pascal Triangle

#include <stdio.h>

int factorial(int a)       
{
	int fact=1;
	for(int i=1; i<=a; i++)
	{
		fact = fact*i;
	}
	return fact;
}

int combination(int x,int y)
{
	int result = factorial(x)/ (factorial(y)*factorial(x-y));
	return result;
}


int main()
{
	int n;
	printf ("\nEnter n: ");
	scanf ("%d", &n);
	
	
	for (int i=0; i<=n; i++)
	{
		for (int j=0; j<=i; j++)
		{
			int ncr = combination(i,j);
        	printf ("%d ", ncr);
		}
	   printf ("\n");	
	}
	
	return 0;
}
