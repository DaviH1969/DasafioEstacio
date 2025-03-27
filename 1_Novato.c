#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char estado, estado2;  // Representação do estado (A-H)
    char cod_carta[20], cod_carta2[20];  // Código da carta (ex: A1, B3)
    char nome_cidade[50], nome_cidade2[50];  // Nome da cidade
    int populacao, populacao2;  // População da cidade
    float area, area2;  // Área da cidade em km²
    float pib, pib2;  // PIB da cidade em bilhões
    int pont_turisticos, pont_turisticos2;  // Número de pontos turísticos

    // Entrada de dados para a Carta 1
    // Armazenagem dos dados insiridos da carta 1
    printf("Insira uma letra de 'A' a 'H' para representar um estado (Carta 1): \n");
    scanf(" %c", &estado);

    printf("Insira a letra do estado seguida de um número de 1 a 4 (ex: A1, B3) (Carta 1): \n");
    scanf("%s", cod_carta);

    printf("Insira o nome da cidade (Carta 1): \n");
    scanf(" %s", nome_cidade);

    printf("Insira o número de habitantes (Carta 1): \n");
    scanf("%d", &populacao);

    printf("Insira a área da cidade em km² (Carta 1): \n");
    scanf("%f", &area);

    printf("Insira o PIB da cidade em bilhões (Carta 1): \n");
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos (Carta 1): \n");
    scanf("%d", &pont_turisticos);
    
    // Entrada de dados para a Carta 2
    // Armazenagem dos dados insiridos da carta 2
    printf("Insira uma letra de 'A' a 'H' para representar um estado (Carta 2): \n");
    scanf(" %c", &estado2);

    printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A1, B3) (Carta 2): \n");
    scanf(" %s", cod_carta2);

    printf("Insira o nome da cidade (Carta 2): \n");
    scanf("%s", nome_cidade2);

    printf("Insira o número de habitantes (Carta 2): \n");
    scanf("%d", &populacao2);

    printf("Insira a área da cidade em km² (Carta 2): \n");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade em bilhões (Carta 2): \n");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos (Carta 2): \n");
    scanf("%d", &pont_turisticos2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", cod_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pont_turisticos);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2); 
    printf("Código: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pont_turisticos2);

    return 0;
}