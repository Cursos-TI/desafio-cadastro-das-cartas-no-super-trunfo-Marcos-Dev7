#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Variáveis de cadastro da primeira carta.
    char estado1, cdg_carta1[6], nome_cidade1[20];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1;

    // Variaveis de cadastro da segunda carta.
    char estado2, cdg_carta2[6], nome_cidade2[20];
    int  populacao2, pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;
    
    // Cadastro da Carta1:
    printf("Digite a letra do estado (Ex: A): \n");
    scanf(" %c", &estado1);
    

    printf("Digite o código da carta: (Ex: A01)\n");
    scanf("%s", cdg_carta1);
    

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a àrea em km`s: \n");
    scanf("%f", &area1);
    

    printf("Digite o Pib: \n");
    scanf("%f", &pib1);
    

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculos

    densidade_populacional1 = (float)(populacao1 / area1);
    pib_per_capita1 = pib1 / populacao1;

    // ---------------------------------------------------
    // Cadastro da Carta2:
    printf("Digite a letra do estado (Ex: A): \n");
    scanf(" %c", &estado2);
    

    printf("Digite o código da carta: (Ex: A01)\n");
    scanf("%s", cdg_carta2);
    

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao2);
    

    printf("Digite a àrea em km`s: \n");
    scanf("%f", &area2);
    

    printf("Digite o Pib: \n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);
    

    // Cálculos

    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição dos Dados das Cartas:
    printf("Carta 1: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", estado1, cdg_carta1, nome_cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1);
    printf("Carta 2: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", estado2, cdg_carta2, nome_cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2);

    return 0;
}
