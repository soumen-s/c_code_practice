// program to print upto nth number in increasing and decreasing order

#include <stdio.h>

int a=1;  
void incDec(int x)
{
	if (x==0) return;   // Base case
	printf("%d ",x);
	x--;
	incDec (x); // recursive call
	printf("%d ",a);
	a++;
	return ;	
}

int main()
{
	int n;
	
	printf ("\nEnter the number: ");
	scanf ("%d", &n);
	
	printf ("\nDecreasing - Increasing order : ");
    incDec(n);
    
   return 0;	
}
