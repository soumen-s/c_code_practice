// Program to search an array element using linear search 

#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int n;
    int element;
    bool flag = false; // denoting a checkmark
    int gotIndex;
    
    printf("\nEnter the size of the array: ");
    scanf ("%d", &n);
    int arr[n];
    
    for (int i=0; i<n; i++)
    {
        printf ("Enter arr[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter the element you want to find: ");
    scanf ("%d", &element);
    
    for (int i=0; i<n; i++)
    {
        if (arr[i] == element)
        {
            flag = true;  // means found
            gotIndex = i;  // collecting the index no.
            break; // to avoid the dublicate elements(if any)
        }
    }
    
    if (flag == true)
    {
        printf ("%d is found at index no. %d",element,gotIndex );
    }
    else
    {
        printf ("%d is not found",element);
    }

    return 0;
}
