#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);
  bool f = false;
  f = (x > y && y > z) || (x < y && y < z);
  printf("%s\n", f ? "Verdadero" : "falso" );
  return 0;
}
