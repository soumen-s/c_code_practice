// Program to print a triangle of letters dynamically, taking the input of size from user.

//  A
//  A  B           for n=4
//  A  B  C
//  A  B  C  D

#include <stdio.h>                        
int main()                                
{                                         
   int n;                                 
   printf ("Enter the number: ");
   scanf ("%d", &n);
   
   for (int i=1; i<=n; i++)
   {
   	 int a=1;
   	 for (int j=1; j<=i; j++)
   	 {
   	    char d = a+64;
   	    char ch = (char) d;  // Typecasting..
   	    printf ("%c ", ch);
   	    a++;
	 }
	  printf ("\n");
   }
   
   return 0;
}
