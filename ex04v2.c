#include <stdio.h>
#include <stdlib.h>

typedef struct produto {
    char *nome;
    int quantidade;
    float preco;
    float total;
} Produto;

int main() {
    Produto listaProdutos[5];

    int i;
    float total = 0;
    for (i = 0; i < 5; i++) {
        Produto *prod = &listaProdutos[i];
        prod->nome = malloc(50);

        printf("Informe o nome do produto: ");
        scanf(" %[^\n]", prod->nome);

        printf("Informe a quantidade do produto: ");
        scanf("%d", &prod->quantidade);

        printf("Informe o valor unitário do produto: ");
        scanf("%f", &prod->preco);

        prod->total = prod->preco * prod->quantidade;

        total += prod->total;
    }

    for (i = 0; i < 5; i++) {
        printf("%s - %d - R$ %.2f \n", listaProdutos[i].nome,
               listaProdutos[i].quantidade, listaProdutos[i].total);
    }

    printf("Total da compra: R$ %.2f", total);

    return 0;
}
