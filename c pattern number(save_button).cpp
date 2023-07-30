//  Program to print save button with numbers dynamically, taking the input of size from user.

//   1  2  3  4  5  6  7       
//   1  2  3     5  6  7     for n=3
//   1  2           6  7      
//   1                 7         

#include <stdio.h>                    
int main()                            
{                                               
	int n;                            
	printf ("\nEnter the size: ");                                    
 	scanf ("%d", &n);                                                
	
	int nsp = 1;    // no. of space
	int nst = n;    // no. of star

////////////////	
	for (int i=1; i<=(2*n)+1; i++)
	{
	  printf ("%d ", i);
    }
    printf ("\n");
////////////////    
	for (int j=1; j<=n; j++)
	{
		int a=1;
		for (int k=1; k<=nst; k++)
		{
			printf("%d ", a);
			a++;
		}
		
		for (int l=1; l<=nsp; l++)
		{
			printf ("  ");
			a++;
		}
		
		for (int k=1; k<=nst; k++)
		{
			printf("%d ", a);
			a++;
			
		}
		nst--;
		nsp+=2;
	   printf ("\n");	
	}
	
   return 0;	
}
