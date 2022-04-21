#include <stdio.h>

int main(int argc, char argv[]) {
  char rta = argv[1][0];
  if (rta == "y") {
    printf("Si\n");
  } else if (rta == "n") {
    printf("No\n");
  } else {
    printf("Respuesta Invalida\n");
  }
  return 0;
}
