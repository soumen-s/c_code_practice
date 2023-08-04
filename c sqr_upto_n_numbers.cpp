#include <stdio.h>

int main()
{
   int i,n,sum=0;
   printf("Input the number of terms to get squares: ");
   scanf("%d",&n);
   printf("\nThe square of natural numbers upto %d terms are : ",n);
   for(i=1;i<=n;i++)
   {
     printf("%d  ",i*i);
     sum+=i*i;
   }
   printf("\n\nThe Sum of Square Natural Number upto %d terms = %d \n",n,sum);
   return 0;
}

