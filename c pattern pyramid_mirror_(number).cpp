// Program to print another type of number pyramid dynamically, taking the input of size from user.

//            1
//         1  2  1        for n=4
//      1  2  3  2  1
//   1  2  3  4  3  2  1

#include <stdio.h>                    
int main()                            
{                                     
   int n;                             
   printf ("Enter the size: ");           
   scanf ("%d", &n);                  
   
  for (int i=1; i<=n; i++)
  {
  	for (int j=1; j<=(n-i); j++)
  	{
  		printf ("  ");
	}
	
	for (int k=1; k<=i; k++)
	{
		printf ("%d ", k);
	}
	
	for (int l=(i-1);  l>=1; l--)
	{
		printf ("%d ", l);
	}
  	
	printf ("\n"); 
  }
       
 return 0;  
}


