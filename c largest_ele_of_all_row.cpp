// program to print all the largest elements of every row of a 2d array

#include <stdio.h>

int main()
{
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
	int max[100] = {0};
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			for(int k= 0; k < m ; k++) 
			{
				if(i == k)
				{ 
					if (arr[i][j] > max[k])
			    	{
				    	max[k] = arr[i][j];
				    }
				}
			}

		}
	}
	printf("All largest elements of every row : ");
	
     for(int p = 0; p < m ; p++) 
	 {
   	    printf("%d ",max[p]);
     }    
    
  return 0;
}
