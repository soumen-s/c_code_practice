// Program to perform Insertion Sort

// Here we are actually inserting elements in a one size array 
// and after each passes we are comparing every element of unsorted array with the recently sorted part

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
    
    //Insertion Sort
    int temp = 0;

    for(int i=1; i<n; i++) // no. of passes starts from 1 as we're considering one element is there 
    {                      // in the array, and we know array of 1 element is always sorted 
    
        int j = i;  // instead, we can use ~  for(int j=i; j<n; j++)
        
        while(arr[j-1]>arr[j]) // if the last element of sorted array(j-1) is greater than first element 
        {                      // of sorted array(j), then those elements will proceed to perform swap
            temp = arr[j-1];   // else the while loop will skiped
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    
    printf ("\nThe sorted array after Selection Sort is: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
  return 0;    
}
