#include <stdio.h>


#define SIZE 6

int A[SIZE] = {10, 9, 8, 7, 1, 5}; // = {6, 9, 4, 15, 5, 7};

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int
getPos(int a[], int low, int high)
{
  int pivot = a[high];
  int i = (low -1);

  for (int p = low; p <= high - 1; p++)
  {
    if (a[p] <= pivot) {
      i++;
      swap(&a[i], &a[p]);
    }
  }
  swap(&a[i + 1], &a[high]);
  return i + 1;
}

void
QuickSort(int a[], int low, int high)
{
  if (low < high)
  {
    int pi = getPos(a, low, high);

    QuickSort(a, low, pi - 1);
    QuickSort(a, pi + 1, high);
  }
}

int
printArray (int a[], int n)
{
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
  printArray(A, SIZE);
  QuickSort(A, 0, SIZE-1);
  printArray(A, SIZE);
  return 0;
}
