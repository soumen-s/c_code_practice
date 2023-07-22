// Program to print a hollow square with stars dynamically, taking the row and column as input from user.

// *  *  *  *  *  *
// *              *          for no. of rows = 4
// *              *              no. of columns = 6
// *  *  *  *  *  *

#include <stdio.h>                        
int main()                                
{                                         
   int n, m;                              
   printf ("Enter the number of rows: ");         
   scanf ("%d", &n);
   
   printf ("Enter the number of columns: ");         
   scanf ("%d", &m);
   
       for (int i=1; i<=n; i++)
	   {
	   	 for (int j=1; j<=m; j++)
	   	 {
	   	    if((i == 1 || i == n )||(j == 1 || j == m))
	   	         printf ("* ");
	   	   	else 
	    	     printf ("  ");  
		 }
	    printf ("\n");  
	   } 
    
 return 0;  
}
