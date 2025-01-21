#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
typedef struct {
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
} Cidade;

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    Cidade cidade1, cidade2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    
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

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
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
