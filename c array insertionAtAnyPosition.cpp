// program to insert an element in the array and print it

#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    printf("\nEnter the size of the array: ");
    scanf ("%d", &n);
    int element;
    int position;
    
    for (int i=0; i<n; i++)
    {
        printf ("Enter arr[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf ("\nBefore insertion, the array is: ");
    for (int i=0; i<n; i++)
    {
        printf ("%d ", arr[i]);
    }
    
    printf ("\n\nEnter the element you want to push in that array: ");
    scanf("%d", &element);
    
    printf ("\nEnter the position where you want to push: ");
    scanf ("%d", &position);
    
    for(int i=n-1; i>=position-1; i--)  // position-1 indicates the index of the array,,i.e. 3rd position means 2nd index
    {                                   // positioning towards right
        arr[i+1] = arr[i];  // converting (i)th position into (i+1)th position, means increased by 1
    }
    
    arr[position-1] = element;
    
    printf ("\n\nAfter insertion, the array is: ");
    for (int i=0; i<n+1; i++)
    {
        printf ("%d ", arr[i]);
    }
    
    return 0;
}
