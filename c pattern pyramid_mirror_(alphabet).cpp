// Program to print another type of alphabet pyramid dynamically, taking the input of size from user.

//            A
//         A  B  A         for n=4 
//      A  B  C  B  A
//   A  B  C  D  C  B  A

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
	int a=1;
	for (int k=1; k<=i; k++)
	{
		char d=a+64;
		char ch = (char) d;
		printf ("%c ", ch);
		a++;
	}
	
	for (a=(i-1); a>=1; a--)
	{
		char e=a+64;
		char chr = (char) e;
		printf ("%c ", chr);
	}
	printf ("\n"); 
  }
       
 return 0;  
}


