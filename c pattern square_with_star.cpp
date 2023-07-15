// Program to print a square of stars dynamically, taking the input of size from user.
#include <stdio.h>

int main()
{                                                        //  * * * *
	int n;                                               //  * * * *  // for n=4
	printf ("\nEnter the size of the square: ");         //  * * * *
	scanf ("%d", &n);                                    //  * * * *
	
	for (int i=1; i<=n; i++)
	{
	  for (int i=1; i<=n; i++)
	  {
		printf("* ");
   	  }   
	  printf ("\n");	
	}
}
