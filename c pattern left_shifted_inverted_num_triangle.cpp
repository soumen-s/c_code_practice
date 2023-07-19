// Program to print a star triangle dynamically, taking the input of size from user.

// 1 2 3 4
// 1 2 3     for n=4
// 1 2
// 1

#include <stdio.h>
int main()
{
   int n;
   printf ("Enter the number: ");
   scanf ("%d", &n);
   
   for (int i=n; i>=1; i--)
   {
   	 for (int j=1; j<=i; j++)
   	 {
   	    printf ("%d ", j);
	 }
	  printf ("\n");
   }
   
   return 0;
}
