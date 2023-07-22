// Program to print a cross of stars dynamically, taking the input of size from user.

//  *           *
//     *     *       for n=5
//        *        
//     *     *
//  *           *  

#include <stdio.h>                        
int main()                                
{                                        
   int n;                                
   printf ("Enter a size: ");           
   scanf ("%d", &n);                      
   
    if (n%2 != 0)
    {
     for (int i=1; i<=n; i++)
     {
   	    for(int j=1; j<=n; j++)
   	    {
   	        if ((j==i) || ((j+i-1) == n))
   	    	{
   	    		printf ("* ");
			}
			else
			{
				printf ("  ");
			}
	    }
	  printf ("\n");  
     }
     
    }
    else
    {
    	printf ("\nPlease enter a odd number...");
	}
    
 return 0;  
}
