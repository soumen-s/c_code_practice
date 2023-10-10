#include <stdio.h>
#include <limits.h>

void swap(int *a, int *b);
int partition(int A[], int low, int high);  // prototype declaration for safety
void quickSort(int A[], int low, int high);

void swap(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int A[], int low, int high) 
{
  int pivot = A[low]; // first index is considering as pivot point
  int i = low;
  int j = high;

  while (i < j) 
  {
    do 
	{
      i++;
    } while (A[i] <= pivot);

    do 
	{
      j--;
    } while (A[j] > pivot);

    if (i < j) 
	{
      swap(&A[i], &A[j]);  // swaping ith and jth value
    }
  }

  swap(&A[low], &A[j]);  // swaping pivot and jth value
  return j;
}

void quickSort(int A[], int low, int high) 
{
  if (low < high) 
  {
    int pivot = partition(A, low, high);
    quickSort(A, low, pivot);
    quickSort(A, pivot + 1, high);
  }
}

int main() 
{
  int A[10] = {10, 16, 8, 12, 15, 6, 3, 9, 5, INT_MAX};
  quickSort(A, 0, 9);   // 0 and 9 is index number

  printf("The sorted Array is: ");
  for (int i = 0; i < 9; i++) 
  {
    printf("%d ", A[i]);
  }

  return 0;
}
