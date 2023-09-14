// Program to extend or allocate the extra size of memory

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m,n;
	printf ("\nEnter the size of your array: ");
	scanf ("%d", &m);
	
	int *ptr;
//	ptr = (int*) malloc (m*sizeof(int));
    ptr = (int*) calloc (m,sizeof(int));
	
	if (ptr == NULL)
	{
		printf ("\nSufficient memory unavailable!");
		exit(1);
	}
	
	printf ("\nEnter %d elements: \n", m);
	for (int i=0; i<m; i++)
	{
		printf("Enter arr[%d]: ",i+1);
		scanf("%d", ptr+i);
	}
	
	printf ("\nNow how many extra elements you want to add?: ");
	scanf ("%d", &n);
	
	ptr = (int*) realloc (ptr, n*sizeof(int));
	
	if (ptr == NULL)
	{
		printf ("\nSufficient memory unavailable!");
		exit(1);
	}
	
	int t = m+n;	
	printf ("\nEnter that %d elements: \n", n);
	for (int i=m; i<t; i++)
	{
		printf("Enter arr[%d]: ",i+1);
		scanf("%d", ptr+i);
	}
	
	printf ("\nSo total %d elements are: ",t);
	for (int i=0; i<t; i++)
	{
		printf("%d ", *(ptr+i));
	}
	
  return 0;	
}
