#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  double x = atof(argv[1]);
  double y = atof(argv[2]);
  double distance = sqrt(x*x + y*y);
  printf("La distacia entre (0,0) y (%.2f,%.2f) es %.2f\n", x, y, distance);
  return 0;
}
