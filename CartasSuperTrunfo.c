#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Variáveis separadas para cada atributo da cidade.
    char state[3], cdg_carta[6], name_city[20];
    int population, number_turistics_attractions;
    float area, pib;
    
    // Cadastro das Cartas:
    printf("Digite a letra do estado (Ex: A): \n");
    scanf("%c", state);
    
    printf("Digite o código da carta: (Ex: A01)\n");
    scanf("%s", cdg_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", name_city);

    printf("Digite o número da população: \n");
    scanf("%d", &population);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &number_turistics_attractions);

    printf("Digite o Pib: \n");
    scanf("%f", &pib);

    printf("Digite a àrea em km`s: \n");
    scanf("%f", &area);

    
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
