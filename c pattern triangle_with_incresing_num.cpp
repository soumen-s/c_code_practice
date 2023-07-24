// Program to print a triangle with incresing number dynamically, taking the size as input from user.

//  1
//  2  3          for n=4
//  4  5  6    
//  7  8  9  10

#include <stdio.h>                   
int main()                            
{                                           
   int n;                             
   printf ("Enter a number: ");           
   scanf ("%d", &n); 
   int k=1;                     
   for (int i=1; i<=n; i++)
   {
   	    for (int j=1; j<=i; j++)
   	    {
   	        printf ("%d ", k);
			k++;   	
	    }
	  printf ("\n");  
   }
    
    
    
 return 0;  
}
