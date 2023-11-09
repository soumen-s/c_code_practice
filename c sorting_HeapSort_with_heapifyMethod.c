#include <stdio.h>

void swap(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heapify(int arr[], int n, int i) 
{
  
  int largest = i;
  int left = 2 * i + 1; 
  int right = 2 * i + 2;

  if (left < n && arr[left] > arr[largest])
   {
    largest = left;
   }
   
  if (right < n && arr[right] > arr[largest])
   {
    largest = right;
   }
   
  // swap and continue heapifying if root is not the largest
  if (largest != i) 
  {
    swap(&arr[i], &arr[largest]);
    heapify(arr, n, largest);
  }
}

// main function to do heap sort
void heapSort(int arr[], int n) 
{
  // building max heap
  for (int i = n / 2 - 1; i >= 0; i--) 
  {
    heapify(arr, n, i);
  }

  // heap sort
  for (int i = n - 1; i > 0; i--) 
  {
    swap(&arr[0], &arr[i]);
    heapify(arr, i, 0); // Heapify root element to get the highest element at the root again
  }
}

void display(int arr[], int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() 
{
  int arr[] = {2, 1, 12, 9, 5, 6, 10};
  int n = sizeof(arr) / sizeof(int);  // here n = 24/4 = 6

  heapSort(arr, n);

  printf("Sorted array is : ");
  display(arr, n);
}

