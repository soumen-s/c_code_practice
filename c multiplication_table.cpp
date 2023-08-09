// Program to print Multiplication table
#include <stdio.h>
int main()
{
   int n;	
   printf ("Enter the number for which you want to display the multiplication table: ");
   scanf ("%d",&n);
   
   printf ("\n");
   if (n > 0)
   {
   	 for (int i=1; i<=10; i++)
   	 {
   	 	printf ("%d * %d = %d\n",n,i,(n*i));
	 }
   }
   
  return 0;
}

