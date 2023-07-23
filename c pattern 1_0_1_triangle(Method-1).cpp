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
                
   int k;                      // METHOD - 1
   for (int i=1; i<=n; i++)
   {
   	    if(i%2 != 0) 
		   k=1;         // l11 & l13 for start the line
   	    else 
		   k=0;
   	    
   	    for (int j=1; j<=i; j++)
   	        {
   	  	        printf ("%d ", k);
   	  	    
   	  	        if (k == 1) 
			        k=0;       // l20 & l22 for switch the elements
   	  	        else 
			        k=1;
	        }
	  printf ("\n");
   }
       
    
 return 0;  
}

