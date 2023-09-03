// program to delete an element from the array and print it

#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    printf("\nEnter the size of the array: ");
    scanf ("%d", &n);
    
    for (int i=0; i<n; i++)
    {
        printf ("Enter arr[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf ("\nBefore deletion, the array is: ");
    for (int i=0; i<n; i++)
    {
        printf ("%d ", arr[i]);
    }
    
//  printf ("\n\nEnter the element you want to delete in that array: ");
//  scanf("%d", &element);
    
    int position;
    printf ("\n\nEnter the position from where you want to delete: ");
    scanf ("%d", &position);
    
    for(int i=position-1; i<=n; i++)  // positioning towards left
    {
        arr[i] = arr[i+1];   // converting (i+1)th position into (i)th position, means decreased by 1
    }                        // here the value(that we want to erase) is overwritten by the next value when we are shifting 
    
    printf ("\n\nAfter deletion, the array is: ");
    for (int i=0; i<n-1; i++)
    {
        printf ("%d ", arr[i]);
    }
    
    return 0;
}
