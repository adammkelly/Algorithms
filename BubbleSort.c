#include <stdio.h>

#define SIZE 6

int A[SIZE] = {6, 9, 4, 15, 5, 7};

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int
printArray (int a[], int n)
{
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

void
BubbleSort(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for(int j = i+1; j < n; j++)
    {
      if (a[i] > a[j]) {
        swap(&a[i], &a[j]);
      }
    }
  }
}

int main(int argc, char const *argv[]) {
  printf("Before sort:\n");
  printArray(A, SIZE);
  BubbleSort(A, SIZE);
  printf("After sort:\n");
  printArray(A, SIZE);
  return 0;
}
