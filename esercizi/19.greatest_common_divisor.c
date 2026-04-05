#include <stdio.h>

int min(int num1, int num2) {
  if (num1 < 0) {
    num1 = -num1;
  }
  if (num2 < 0) {
    num2 = -num2;
  }
  if (num1 == 0 && num2 == 0) {
    return -1;
  }
  if (num1 <= num2) {
    return num1;
  } else {
    return num2;
  }
}

int find_greatest_common_divisor(int num1, int num2) {
  int candidate = min(num1, num2);
  if (candidate < 0) {
    return candidate;
  }
  if (num1 == 0) {
    return num2;
  }
  if (num2 == 0) {
    return num1;
  }
  while ((num1 % candidate) != 0 || (num2 % candidate) != 0) {
    candidate--;
  }
  return candidate;
}

int main() {
  int num1, num2;
  printf("Inserisci il primo numero: ");
  scanf("%i", &num1);
  printf("\nInserisci il secondo numero: ");
  scanf("%i", &num2);
  int greatest_common_divisor = find_greatest_common_divisor(num1, num2);
  if (greatest_common_divisor < 0) {
    printf("\nIl massimo comune divisore tra %i e %i non esiste\n", num1, num2);
    return -1;
  }
  printf("\nIl massimo comune divisore tra %i e %i è: %i\n", num1, num2,
         greatest_common_divisor);
  return 0;
}
