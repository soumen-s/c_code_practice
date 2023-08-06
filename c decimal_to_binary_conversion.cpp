//program to convert a decimal number into binary number

#include <stdio.h>

void binary(int arr[], int x)
{
	int c1=0, c2=0;
	
	for (int i=0; i<x; i++)
	{
		if (arr[i] == 0)
	    {
		    c1++;
	    }
	    else
	    {
	    c2++;;
	    }
	}
	  
	  
	if (c1 > c2)
	{
		printf ("\n\nIn this binary representation, the number of 0 is max with %d times.",c1);
	}
	else if(c1 == c2)
	{
		printf ("\n\nIn this binary representation, the number of 0 and 1 is same with %d times.",c1);
	}
	else
	{
		printf ("\n\nIn this binary representation, the number of 1 is max with %d times.",c2);
	}
}
int main()
{
	int n;
	int rem;
	int arr[100];
	int count = 0;
	printf ("\nEnter the number you want to convert: ");
	scanf ("%d", &n);
	int n1 = n;
	
	int i=0;
	for ( i=0; n!=0; i++)
	{
		rem = n%2;
		n = n/2;
		arr[i] = rem;
		count++;
	}
	
	printf ("\nThe binary representation of %d is: ",n1);
	for (int j=count-1; j>=0; j--)
	{
		printf ("%d ", arr[j]);
	}
	
	binary(arr,i);
    
	return 0;
}
