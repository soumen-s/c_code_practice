// Program to print a star triangle dynamically, taking the input of size from user.

// *
// * *     for n=4  
// * * *
// * * * *

#include <stdio.h>
int main()
{                                     
   int n;                              
   printf ("Enter the number: ");      
   scanf ("%d", &n);                   
   
   for (int i=1; i<=n; i++)
   {
   	 for (int j=1; j<=i; j++)
   	 {
   	    printf ("*");
	 }
	  printf ("\n");
   }
   
   return 0;
}
