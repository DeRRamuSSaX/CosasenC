#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = 1;
  while (n <= 10) {
    printf("%d\n", n);
    n = n + 1;
  }
  printf("Salimos del loop\n");
  return 0;
}
