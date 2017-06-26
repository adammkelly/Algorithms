#include <stdio.h>

#define SIZE 6

int A[SIZE] = {2, 3, 33, 41, 51, 77};

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

int
BinarySearch(int a[], int low, int high, int k)
{

  if(high >= 1) {

    int mid = low + (high - 1)/2;

    if (a[mid] == k)   return mid;

    if (a[mid] > k)    return BinarySearch(a, low, mid-1, k);

    return BinarySearch(a, mid+1, high, k);
  }
  return -1;

}

int main(int argc, char const *argv[]) {
  printf("Value %d at index: %d\n", 51, BinarySearch(A, 0, SIZE, 51));
  printf("Value %d at index: %d\n", 2, BinarySearch(A, 0, SIZE, 2));
  printf("Value %d at index: %d\n", 33, BinarySearch(A, 0, SIZE, 33));
  return 0;
}
