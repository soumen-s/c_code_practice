// Program to search the duplicate element from an array

#include <stdio.h>

int main() 
{
    int found;
    int arr[9] = {1,2,7,4,5,6,7,8,9};
    int n=9;
    
    for (int i=0; i<n; i++)  // if i=2
    {
        for (int j=i+1; j<n; j++) // then j=2 to j=8
        {
            if(arr[i] == arr[j])
            {
                found = arr[i];
                break;
            }
        }
    }
    
    printf ("\nThe duplicate element is: %d", found);
    
    return 0;
}
