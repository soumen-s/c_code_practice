// Program to print a triangle of letters and numbers simultaneously, taking the input of size from user.

// 1
// A  B    
// 1  2  3      for n=5 
// A  B  C  D
// 1  2  3  4  5

#include <stdio.h>                       
int main()                                
{                                         
   int n;                                 
   printf ("Enter the size: ");         
   scanf ("%d", &n);
   
   for (int i=1; i<=n; i++)
   {
   	    int a=1;
   	    for (int j=1; j<=i; j++)
   	    {
   	     if (i%2 == 0)
   	     {
   	    	    char d = a+64;
   	    	    char ch = (char) d;
   	    	    printf ("%c ", ch);
   	    	    a++;
   	     }
   	     else
   	     {
   	        printf ("%d ", j);
	     }
	    }
	  printf ("\n");  
   }
   
   return 0;
}
