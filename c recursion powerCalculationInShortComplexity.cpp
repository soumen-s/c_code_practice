// Program to print the power of a number in a short time complexity 

/* Here in every step, we have devided the power by 2, instead of decreasing by 1
   so the number processed very fast. And in case of even power, the eliminated base 
   part is being added previously in the code. */
   
#include <stdio.h>

int power(int m, int n)
{
	if (n==0) return 1;
	//if (n==1) return m;  //we will not use it caz n=0 will solve this problem 
	
	int x = power(m,n/2);
	int result = 1;
	if (n%2 != 0)
	{
		result = x * x * m;
	}
	if (n%2 == 0)
	{
		result = x * x;
	}
//	int result = x * x;
	return result;
} 
 
int main()
{
	int m,n;
	
	printf ("Enter the base: ");
	scanf ("%d", &m);
	
	printf ("Enter the power: ");
	scanf ("%d", &n);
	
	printf ("\nThe result is: %d", power(m,n));
   return 0;	
}
