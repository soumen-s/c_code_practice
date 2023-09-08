// Program to search an element using binary search

#include <stdio.h>

int main() 
{
    int n;
    printf ("\nEnter the size of the array: ");
    scanf ("%d", &n);
    int arr[n];
    
    printf ("\n\nEnter %d elements in a sorted order --\n\n", n);
    for (int i=0; i<n; i++)
    {
        printf ("Enter arr[%d]: ", i+1);
		scanf ("%d", &arr[i]);
    }
    
    int target;
    printf ("\nEnter the element to find: ");
	scanf ("%d", &target);
    
    int high = n-1;
    int low = 0;
    int mid ;
    int milGayi=0;
    
   while (low <= high)
   {
      mid = (high+low) / 2;    
      if (target < arr[mid])
      {
          high = mid-1;
      }
      else if (target>arr[mid])
      {
          low = mid+1;
      }
      else
      {
          milGayi = target;
          printf ("%d is found at index: %d",target, mid);
          return 0;
      }
    }
    
    printf ("%d is not found...",target);  // excecution of these line means the while loop is not worked
    
    return 0;
}
