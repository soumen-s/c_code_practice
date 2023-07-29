// Program to print star diamond dynamically, taking the input of size from user.

//           *
//        *  *  *          for n=7
//     *  *  *  *  *        
//  *  *  *  *  *  *  *
//     *  *  *  *  *    
//        *  *  *
//           *

#include <stdio.h>                    
int main()                            
{                                     
   int n;                             
   printf ("Enter the size in odd number: ");       
   scanf ("%d", &n);                  
                                      
  int nsp = (n/2);
  int nst = 1;                                    
  for (int i=1; i<=n; i++)
  {
    for (int j=1; j<=nsp; j++)
	{
		printf ("  ");
	} 
	
	for (int k=1; k<=nst; k++)
	{
		printf ("* ");
	}  
	
	int midln = (n/2)+1;
		
		if (i<midln)
		{
			nsp--;
		    nst+=2;
		}
		else
		{
			nsp++;
			nst-=2;
		}
	  printf ("\n");
  }
       
 return 0;  
}

