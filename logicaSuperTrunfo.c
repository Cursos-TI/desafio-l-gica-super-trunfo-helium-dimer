#include <stdio.h>

typedef struct {
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
} Cidade;

int main() {
    
    Cidade cidade1, cidade2;
    
    printf("Digite os dados da Cidade 1:\n");
    printf("Codigo: ");
    scanf("%s", cidade1.codigo);
    printf("Nome: ");
    scanf("%s", cidade1.nome);
    printf("Populacao: ");
    scanf("%d", &cidade1.populacao);
    printf("Area (em km2): ");
    scanf("%f", &cidade1.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &cidade1.pib);

    printf("\nDigite os dados da Cidade 2:\n");
    printf("Codigo: ");
    scanf("%s", cidade2.codigo);
    printf("Nome: ");
    scanf("%s", cidade2.nome);
    printf("Populacao: ");
    scanf("%d", &cidade2.populacao);
    printf("Area (em km2): ");
    scanf("%f", &cidade2.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &cidade2.pib);
    
    printf("\nComparacao entre as cidades:\n");

    if (cidade1.populacao > cidade2.populacao) {
        printf("Cidade com maior populacao: %s\n", cidade1.nome);
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("Cidade com maior populacao: %s\n", cidade2.nome);
    } else {
        printf("Ambas as cidades possuem a mesma populacao.\n");
    }

    if (cidade1.area > cidade2.area) {
        printf("Cidade com maior area: %s\n", cidade1.nome);
    } else if (cidade1.area < cidade2.area) {
        printf("Cidade com maior area: %s\n", cidade2.nome);
    } else {
        printf("Ambas as cidades possuem a mesma area.\n");
    }

    if (cidade1.pib > cidade2.pib) {
        printf("Cidade com maior PIB: %s\n", cidade1.nome);
    } else if (cidade1.pib < cidade2.pib) {
        printf("Cidade com maior PIB: %s\n", cidade2.nome);
    } else {
        printf("Ambas as cidades possuem o mesmo PIB.\n");
    }

    return 0;
}
