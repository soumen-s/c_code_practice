// Program to print a right shifted triangle of alphabet dynamically, taking the input of size from user.

//           A  
//        A  B      for n=4
//     A  B  C      
//  A  B  C  D

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
   	  
   	    int a=1;
   	    for (int k=1; k<=i; k++)
   	    {
   	  	    char d=a+64;
   	  	    char ch= (char) d;
   	  	    printf ("%c ", ch);
   	  	    a++;  	
	    }
	 printf ("\n");  
   }
    
 return 0;  
}
