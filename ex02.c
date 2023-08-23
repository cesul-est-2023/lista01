#include <stdio.h>

int main() {
    float saldo;
    float lancamentos[10];

    int i;

    printf("Informe o saldo inicial da conta: ");
    scanf("%f", &saldo);

    for (i = 0; i < 10; i++) {
        printf("Informe o lançamento %d: ", i);
        scanf("%f", &lancamentos[i]);

        saldo = saldo + lancamentos[i];
    }

    printf("O saldo final da conta é R$ %.2f", saldo);

    return 0;
}