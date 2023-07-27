// Program to print a pyramid of stars dynamically, taking the input of size from user.

//           *
//        *  *  *          for n=4
//     *  *  *  *  *        
//  *  *  *  *  *  *  *

#include <stdio.h>                    
int main()                           
{                                        
   int n;                             
   printf ("Enter a number: ");           
   scanf ("%d", &n);                  

   for (int i=1; i<=n; i++)
   {
   	  for (int j=1; j<=(n-i); j++)
   	  {
   	  	printf ("  ");
	  }
	  for (int k=1; k<=i; k++)
	  {
	  	printf ("* ");
	  }
	  for (int l=2; l<=i; l++)
	  {
	  	printf ("* ");
	  }
	 printf ("\n");  
   }
    
 return 0;  
}
