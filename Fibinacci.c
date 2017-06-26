#include <stdio.h>

int
fibinacci(int num) {
  if (num == 0) {
      return 0;
  } else if (num == 1) {
      return 1;
  } else {
    return (fibinacci(num-1) + fibinacci(num-2));
  }
}


int main(int argc, char const *argv[]) {
  int count = 14;
  for (int i = 0; i < count; i++) {
    printf("%d\n", fibinacci(i));
  }
  return 0;
}
