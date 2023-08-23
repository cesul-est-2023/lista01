#include <stdio.h>
#include <stdlib.h>

int main() {
    char *nome = malloc(50);
    float nota;

    printf("Informe o nome do aluno: ");
    scanf(" %[^\n]", nome);

    printf("Informe a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 7) {
        printf("Aluno %s está aprovado!", nome);
    } else {
        printf("Aluno %s está reprovado!", nome);
    }

    return 0;
}