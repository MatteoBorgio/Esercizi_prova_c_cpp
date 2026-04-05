#include <stdio.h>

int max(int num1, int num2) {
  if (num1 < 0) {
    num1 = -num1;
  }
  if (num2 < 0) {
    num2 = -num2;
  }
  if (num1 == 0 || num2 == 0) {
    return -1;
  }
  if (num1 >= num2) {
    return num1;
  } else {
    return num2;
  }
}

int find_least_common_multiple(int num1, int num2) {
  int candidate = max(num1, num2);
  if (candidate < 0) {
    return candidate;
  }
  while ((candidate % num1) != 0 || (candidate % num2) != 0) {
    candidate++;
  }
  return candidate;
}

int main() {
  int num1, num2;
  printf("Inserisci il primo numero: ");
  scanf("%i", &num1);
  printf("\nInserisci il secondo numero: ");
  scanf("%i", &num2);
  int least_common_multiple = find_least_common_multiple(num1, num2);
  if (least_common_multiple < 0) {
    printf("\nNessuno dei due numeri può essere uguale a 0\n");
    return 1;
  }
  printf("\nIl minimo comune multiplo tra %i e %i è: %i\n", num1, num2,
         least_common_multiple);
  return 0;
}
