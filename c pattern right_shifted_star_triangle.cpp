// Program to print a right shifted triangle dynamically, taking the size as input from user.

//           *
//        *  *       for n=4
//     *  *  *     
//  *  *  *  *

#include <stdio.h>                    
int main()                            
{                                        
   int n;                             
   printf ("Enter a number: ");           
   scanf ("%d", &n);      
   int k;                     
   for (int i=1; i<=n; i++)
   {
   	 for(int j=1; j<=(n-i); j++)  // This loop is only for spaces..
   	 {
 	    printf ("  ");
	 }
	 for (int k=1; k<=i; k++)
	 {
	  	printf ("* ");
	 }
     printf ("\n");  
   }
    
    
    
 return 0;  
}
