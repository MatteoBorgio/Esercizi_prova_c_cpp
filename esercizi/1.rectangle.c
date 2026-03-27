#include <stdio.h>

int main() {
    int base, height;
    printf("Studio di un rettangolo");
    printf("\nInserire la base: ");
    scanf("%d", &base);
    printf("\nInserire l'altezza: ");
    scanf("%d", &height);
    const int perimeter = (base + height) * 2;
    const int area = base * height;
    printf("\nPerimetro: %d", perimeter);
    printf("\nArea: %d", area);

    return 0;
}