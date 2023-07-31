// Only applicable for symmetric matrix

#include <stdio.h>

int main() {
    int m; 
	printf ("\nEnter the number of rows: ");
	scanf ("%d", &m);
	
	int n; 
	printf ("\nEnter the number of columns: ");
	scanf ("%d", &n);
	
	int arr[m][n];
	
	printf("Enter all matrix elements : \n");
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			scanf ("%d",&arr[i][j]);
		}
	}
	
    printf("After transpose, the matrix will be -> \n");
	
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			 printf ("%d ", arr[j][i]);
			 
		}
	  printf ("\n");
	}
    return 0;
}
