// Program to print a square of letters dynamically, taking the input of size from user.

// A  B  C  D
// A  B  C  D    for n=4
// A  B  C  D
// A  B  C  D

#include <stdio.h>                        
int main()                                
{                                         
   int n;                                 
   printf ("Enter the number: ");
   scanf ("%d", &n);
   
   for (int i=1; i<=n; i++)
   {
   	 int a=1;
   	 for (int j=1; j<=n; j++)
   	 {
   	    char d = a+64;
   	    char ch = (char) d;  // Typecasting..
   	    printf ("%4c", ch);
   	    a++;
	 }
	  printf ("\n");
   }
   
   return 0;
}
