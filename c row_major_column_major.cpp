// program to print the array elements in row-wise and column-wise

#include <stdio.h>

int main() 
{
    int m,n;
    printf ("Enter row: ");
    scanf ("%d", &m);
    printf ("Enter column: ");
    scanf ("%d", &n);
    int arr[m][n];
    
    for (int i=0; i<m; i++)
    {
    	for (int j=0; j<n; j++)
    	{
    		printf ("Enter arr[%d][%d]: ",i,j);
    		scanf ("%d", &arr[i][j]);
		}
	}
	
	printf ("\nThe array in row major traversal is: \n");
	for (int i=0; i<m; i++)
    {
    	for (int j=0; j<n; j++)
    	{
    		printf ("%d ", arr[i][j]);
		}
	  printf ("\n");
	}
	
	printf ("\nThe array in column major traversal is: \n");
	for (int i=0; i<n; i++)
    {
    	for (int j=0; j<m; j++)
    	{
    		printf ("%d ", arr[j][i]);
		}
	  printf ("\n");
	}
    
  return 0;
}
