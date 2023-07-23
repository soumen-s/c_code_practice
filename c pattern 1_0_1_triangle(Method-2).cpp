// Program to print a triangle of 1 & 0 dynamically, taking the input of size from user.

//  1
//  0  1          for n=4
//  1  0  1       
//  0  1  0  1

#include <stdio.h>                    
int main()                           
{                                          
   int n;                             
   printf ("Enter a number: ");           
   scanf ("%d", &n);                  

   for (int i=1; i<=n; i++)  // METHOD - 2
   {
   	    for (int j=1; j<=i; j++)
   	    {
   	  	    if ((i+j)%2 == 0)
			    printf ("1 ");
   	  	    else 
			    printf ("0 ");
	    }
	 printf ("\n"); 
   }
    
 return 0;  
}
