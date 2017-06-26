#include <stdio.h>

int
PowerOfTwo(int n)
{
  while (n > 1 && (n & 0x1) == 0) {
    n >>= 1;
  }
  return (n==1);
}

int main(int argc, char const *argv[]) {
  int x = 32;
  printf("Power of 2? %d - %s\n", x, PowerOfTwo(x) ? "Yes" : "No");
  x = 41;
  printf("Power of 2? %d - %s\n", x, PowerOfTwo(x) ? "Yes" : "No");
  return 0;
}
