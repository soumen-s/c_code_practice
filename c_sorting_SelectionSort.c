// Program to perform Selection Sort

#include <stdio.h>

int max = 10;
int arr[10];

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("Enter arr[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    // Selection Sort
    int temp = 0;
    int i,j,k;
    for(i=0; i<n-1; i++) // no. of passes will end upto, before the last element
    {
        for(int j=k=i; j<n; j++) // 'j' is for traversing that unsorted array part
        {                        // 'k' will stay at ith position to perform comparison with that unsorted array
            if(arr[k]>arr[j])
            {
                temp = arr[k];
                arr[k] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf ("\nThe sorted array after Selection Sort is: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
  return 0;  
}
