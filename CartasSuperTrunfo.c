#include <stdio.h>

int main() {

    // Variáveis de cadastro da primeira carta.
    char estado1, cdgCarta1[6], nomeCidade1[20];
    int pontosTuristicos1;
    unsigned long int populacao1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;

    // Variaveis de cadastro da segunda carta.
    char estado2, cdgCarta2[6], nomeCidade2[20];
    int pontosTuristicos2;
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;

    //Variaveis Comparação
    int populacaoResultado, areaResultado, pibResultado, PontosResultado, densidadeResultado, superPoderResultado, pibPerCapitaResultado;
  

    // Cadastro da Carta1:
    printf("--------------- Cadastro da Carta 1-------------------\n");
    printf(" \n");

    printf("Digite a letra do estado (Ex: A): \n");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta: (Ex: A01)\n");
    scanf("%s", cdgCarta1);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Digite o número da população: \n");
    scanf("%lu", &populacao1);
    
    printf("Digite a àrea em km`s: \n");
    scanf("%f", &area1);
    
    printf("Digite o Pib: \n");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);
    
    // Cálculos

    densidadePopulacional1 = (float)(populacao1 / area1);
    pibPerCapita1 = pib1 / (float)populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + ( 1 / densidadePopulacional1);
    
    printf("-----------------------------------------------------\n");
    printf(" \n");

    // Cadastro da Carta2:
    printf("--------------- Cadastro da Carta 2-------------------\n");
    printf(" \n");

    printf("Digite a letra do estado (Ex: A): \n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta: (Ex: A01)\n");
    scanf("%s", cdgCarta2);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite o número da população: \n");
    scanf("%lu", &populacao2);
    
    printf("Digite a àrea em km`s: \n");
    scanf("%f", &area2);
    
    printf("Digite o Pib: \n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);
    

    // Cálculos

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + ( 1 / densidadePopulacional2);



    // Exibição dos Dados das Cartas:
    printf("Carta 1: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %f\n", estado1, cdgCarta1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1, superPoder1); 
    printf(" \n");

    printf("Carta 2: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %f\n", estado2, cdgCarta2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2, superPoder2);

    //Comparações

    //Resultado

    populacaoResultado = populacao1 > populacao2;
    areaResultado = area1 > area2;
    pibResultado = pib1 > pib2;
    PontosResultado = pontosTuristicos1 > pontosTuristicos2;
    pibPerCapitaResultado = pibPerCapita1 > pibPerCapita2;
    superPoderResultado = superPoder1 > superPoder2;
    densidadeResultado = densidadePopulacional1 < densidadePopulacional2;

    //Comparações das Cartas
    printf("\n--- Comparação de Cartas ---\n");

    printf("População: Carta %d venceu (%d)\n", populacaoResultado ? 1 : 2, populacaoResultado);
    printf("Área: Carta %d venceu (%d)\n", areaResultado ? 1 : 2, areaResultado);
    printf("PIB: Carta %d venceu (%d)\n", pibResultado ? 1 : 2, pibResultado);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", PontosResultado ? 1 : 2, PontosResultado);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadeResultado ? 2 : 1, !densidadeResultado);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapitaResultado ? 1 : 2, pibPerCapitaResultado);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoderResultado ? 1 : 2, superPoderResultado);

    return 0;
}
