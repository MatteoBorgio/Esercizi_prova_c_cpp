#include <stdio.h>

int main() {
    float lordo, aliquotaIVA;
    printf("Scorporo dell'IVA\n");
    printf("Inserisci il prezzo: ");
    scanf("%f", &lordo);
    printf("\nInserisci l'aliquota IVA: ");
    scanf("%f", &aliquotaIVA);
    const float netto = (100 * lordo) / (100 * aliquotaIVA);
    const float imposta = (netto * aliquotaIVA) / 100;
    printf("\nBase imponibile: %f", netto);
    printf("\nImposta: %f", imposta);

    return 0;
}