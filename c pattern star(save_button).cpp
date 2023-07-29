// Program to print save button with star dynamically, taking the input of size from user.

//   *  *  *  *  *  *  *                          *  *  *  *  *  *  *
//   *  *  *     *  *  *                                   
//   *  *           *  *     =                             +
//   *                 *           *  *  *         __                         *  *  *
//                                 *  *       +    __  __  __            +    *  *
//                                 *               __  __  __  __  __         *

#include <stdio.h>                    
int main()                            
{                                     
	int n;                            
	printf ("\nEnter the number of lines: ");    
 	scanf ("%d", &n);                 
	
	int nsp = 1;      // nsp = no. of spaces
	int nst = n-1;    // nst = no. of stars

////////////////	
	for (int i=1; i<=(2*n)-1; i++)
	{
	  printf ("* ");
    }
    printf ("\n");
////////////////    
	for (int j=1; j<=n-1; j++)
	{
		for (int k=1; k<=nst; k++)
		{
			printf("* ");
		}
		for (int l=1; l<=nsp; l++)
		{
			printf ("  ");
		}
	
		for (int k=1; k<=nst; k++)
		{
			printf("* ");
		}
		nst--;
		nsp+=2;
	   printf ("\n");	
	}
	
   return 0;	
}
