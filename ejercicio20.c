// ej 20
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);
  int e = atoi(argv[5]);
  int suma = 0;
  suma = suma += (a%2 == 0) ? 0 : a;
  suma = suma += (b%2 == 0) ? 0 : b;
  suma = suma += (c%2 == 0) ? 0 : c;
  suma = suma += (d%2 == 0) ? 0 : d;
  suma += e&1 ? e :0;
  printf("%d\n", suma);

  //&& AND LOGICO
  // & bitwise
  // || OR logico
  // | or bitwise

  return 0;
}
