#include <stdio.h>

int get_factorial(int num) {
  int factorial = 1;
  if (num < 0) {
    return 0;
  }
  if (num == 0) {
    return factorial;
  }
  for (int i = 1; i <= num; i++) {
    factorial *= i;
  }
  return factorial;
}
int main() {
  int num;
  printf("Inserisci un numero: ");
  scanf("%i", &num);
  int factorial = get_factorial(num);
  if (factorial == 0) {
    printf("\nInserito numero non valido.\n");
    return 1;
  }
  printf("\nIl fattoriale è: %i\n", factorial);
  return 0;
}
