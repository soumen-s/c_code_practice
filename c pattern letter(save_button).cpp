// Program to print save button with numbers dynamically, taking the input of size from user.

//   A  B  C  D  E  F  G       
//   A  B  C     E  F  G    for n=3
//   A  B           F  G            
//   A                 G        

#include <stdio.h>                    
int main()                            
{                                         
	int n;                             
	printf ("\nEnter the size: ");                                    
 	scanf ("%d", &n);                                                
	
	int nsp = 1;
	int nst = n;

    int d=1;
////////////////	
	for (int i=1; i<=(2*n)+1; i++)
	{
	  char e = d+64;
	  char ch = (char) e;	
	  printf ("%c ", ch);
	  d++;
    }
    printf ("\n");
////////////////    
	for (int j=1; j<=n; j++)
	{
		int a=1;
		int d=1;
		for (int k=1; k<=nst; k++)
		{
			char e = d+64;
			char ch = (char) e;
			printf("%c ", ch);
			d++;
			a++;
		}
		
		for (int l=1; l<=nsp; l++)
		{
			printf ("  ");
			d++;
			a++;
		}
		
		for (int k=1; k<=nst; k++)
		{
			char e = d+64;
			char ch = (char) e;
			printf("%c ", ch);
			d++;
			a++;
			
		}
		nst--;
		nsp+=2;
	   printf ("\n");	
	}
	
   return 0;	
}
