#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Variáveis de cadastro da primeira carta.
    char estado1, cdg_carta1[6], nome_cidade1[20];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Variaveis de cadastro da segunda carta.
    char estado2, cdg_carta2[6], nome_cidade2[20];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    
    // Cadastro da Carta1:
    printf("Digite a letra do estado (Ex: A): \n");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta: (Ex: A01)\n");
    scanf("%s", cdg_carta1);

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade1, 30, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;

    printf("Digite o número da população: \n");
    scanf("%d", &populacao1);

    printf("Digite a àrea em km`s: \n");
    scanf("%f", &area1);

    printf("Digite o Pib: \n");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);
    
    // Cadastro da Carta2:
    printf("Digite a letra do estado (Ex: A): \n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta: (Ex: A01)\n");
    scanf("%s", cdg_carta2);

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade2, 30, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;

    printf("Digite o número da população: \n");
    scanf("%d", &populacao2);

    printf("Digite a àrea em km`s: \n");
    scanf("%f", &area2);

    printf("Digite o Pib: \n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos Dados das Cartas:
    printf("Carta 1: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f bilhões de reais\nNúmero de Pontos Turisticos: %d\n", estado1, cdg_carta1, nome_cidade1, populacao1, area1, pib1, pontos_turisticos1);
    printf("Carta 2: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f bilhões de reais\nNúmero de Pontos Turisticos: %d\n", estado2, cdg_carta2, nome_cidade2, populacao2, area2, pib2, pontos_turisticos2);

    return 0;
}
