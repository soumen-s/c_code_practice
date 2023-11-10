#include <stdio.h>

int main()
{
   int size;
   printf ("Enter the number of terms in the polynomial equation: ");
   scanf ("%d", &size);
   
   int coef[size];
   int expo[size];
    
   for (int i=1; i<=size; i++)
   {
       printf ("Enter coefficient for term %d: ", i);
       scanf("%d", &coef[i]);
       
       printf("Enter exponent for term %d: ",i);
       scanf("%d", &expo[i]);
       
   }
   
   printf ("\nThe polynomial expression is: ");
   for (int i=1; i<=size; i++)
   {
       printf ("%dx^%d",coef[i],expo[i]);
       
       if (i<size)
       {
           printf(" + ");
       }
   }
   return 0;
}

