// Program to reverse the array elements and print it
#include <stdio.h>

int main()
{
   int n;
   printf ("\nEnter the size of the array: ");
   scanf("%d", &n);
   int arr[n];
   
   for (int i=0; i<n; i++)
   {
   	    printf ("Enter arr[%d]: ",i+1);
   	    scanf ("%d", &arr[i]);
   }
   
   printf ("\nArray before reversing: ");
   for (int i=0; i<n; i++)
   {
   	    printf ("%d ", arr[i]);  
   }
   
   int temp = 0;
   for (int i=0; i<(n/2); i++)
   {
	    temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
   }
   
   printf ("\n\nArray after reversing: ");
   for (int i=0; i<n; i++)
   {
        printf ("%d ", arr[i]); 
   }
   
  return 0;
}
