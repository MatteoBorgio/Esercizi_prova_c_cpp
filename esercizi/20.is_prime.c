#include <stdio.h>

int is_prime(int num);

int main() {
  int num;
  printf("Inserisci un numero: ");
  scanf("%i", &num);
  if (is_prime(num) == 0) {
    printf("\nIl numero %i è primo.\n", num);
  } else {
    printf("\nIl numero %i non è primo.\n", num);
  }
  return 0;
}

int is_prime(int num) {
  if (num == 0 || num == 1) {
    return 1;
  }
  int i = 2;
  while (i < num) {
    if ((num % i) == 0) {
      return 1;
    }
    i++;
  }
  return 0;
}
