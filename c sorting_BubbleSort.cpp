// Program to sort an array using bubble sort

#include <stdio.h>
int main()
{
	int arr[10], temp;
	printf ("Enter the array elements randomly.\n\n");
	
	for (int i=0; i<10; i++)
	{
		printf ("Enter element at index %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	for (int i=0; i<10; i++)
	{
		for (int j=0; j<10-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
        }
	}
	printf ("\n\nThe sorted elements are: ");
	for (int i=0; i<10; i++)
	{
		printf ("%d ", arr[i]);
	}
  return 0;	
}
