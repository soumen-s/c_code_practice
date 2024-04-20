// program to increase the size of an array by shifting to a larger array created on heap.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // creating the pointers in the stack
    int* arr1;
    int* arr2;
    
    // pointing to a bunch of mem. address which belongs in heap
    arr1 =(int*)malloc(5*sizeof(int)); // allocating mem. space and pointing them 
    arr2 =(int*)malloc(9*sizeof(int)); // using the pointers
    
    for(int i=0; i<5; i++)
    {
        printf("arr1[%d] : ",i+1);
        scanf("%d", &arr1[i]);
    }
    
    // as we need more space, we're shifting the elements to that larger array
    for(int i=0; i<5; i++)
    {
        arr2[i] = arr1[i];
    }
    
    free(arr1); // as we'll not use the memory again
    arr1 = arr2; // arr1 is now pointing to arr2's array.
    arr2 = NULL; // deallocate the pointer where it was pointed to.
    
    // now arr1 is pointing to the larger array(arr2) directly
    
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr1[i]); 
    }
    
    return 0;
}
