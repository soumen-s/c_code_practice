// Program to perform OPTIMIZED bubble sort in c

/*
1. Here we have added checkmark in the inner loop. if the swapping is not happening
   even for once, that says that the array is already sorted, and then the inner loop
   value of check will not change and the whole loop will break.

2. That (n-1-i) part is also helping in optimization. It ensures that in each subsequent
   pass, the inner loop can avoid comparing and swapping the already sorted elements at the end.
   That's how we'll get lower time complexity from here.
*/

#include <stdio.h>
#include <stdbool.h>

int max = 10;
int arr[10];

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("Enter arr[%d]: ",i+1);
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n-1; i++)
    {
        bool check = false;
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                check = true;
            }
        }
        
        if(check == false)
        {
            break;
        }
    }
    
    printf("The array elements after sorting is: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    
  return 0;
}
