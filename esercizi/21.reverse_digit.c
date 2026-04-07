#include <stdio.h>

int reverse_digit(int num);

int main() {
  int num;
  printf("Inserisci un numero: ");
  scanf("%i", &num);
  printf("\nNumero invertito: %i\n", reverse_digit(num));
  return 0;
}

int reverse_digit(int num) {
  int original_num = num;
  if (num < 0) {
    num = -num;
  }
  if (num < 10) {
    return num;
  }
  int last_digit, reverted_num = 0;
  while (num > 0) {
    last_digit = num % 10;
    reverted_num *= 10;
    reverted_num += last_digit;
    num /= 10;
  }
  if (original_num < 0) {
    return -reverted_num;
  }
  return reverted_num;
}
