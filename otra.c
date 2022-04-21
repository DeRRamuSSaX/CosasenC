// ej 19 billetes
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int dinero = atoi(argv[1]);
  printf("dinero: %d\n", dinero);
  printf("1000: %d\n", dinero / 1000);
  dinero %= 1000;
  printf("500: %d\n", dinero / 500);
  dinero %= 500;
  printf("200: %d\n", dinero / 200);
  dinero %= 200;
  printf("100: %d\n", dinero / 100);
  dinero %= 100;
  printf("50: %d\n", dinero / 50);
  dinero %= 50;
  printf("20: %d\n", dinero / 20);
  dinero %= 20;
  printf("10: %d\n", dinero / 10);
  dinero %= 10;
  return 0;
}
