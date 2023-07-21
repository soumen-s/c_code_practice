// Program to print a plus pattern by stars dynamically, taking the input of size from user.

//       *
//       *               for n=5
// *  *  *  *  *
//       *
//       * 

#include <stdio.h>                      
int main()                                
{                                         
   int n;                                
   printf ("Enter the size: ");         
   scanf ("%d", &n);
    if (n%2 != 0)
    {
       for (int i=1; i<=n; i++)
	   {
	   	    for (int j=1; j<=n; j++)
	   	    {
	   	    	if((i == (n+1)/2) || (j == (n+1)/2))
	   	    	    printf ("* ");
	   	    	else
				    printf ("  ");  
		    }
		  printf ("\n");  
	   } 
    }
    else
    {
    	printf ("\nEnter a odd number...");
	}
 
 
 
 return 0;  
}
