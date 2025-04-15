#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira cidade (A-H):\n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta da primeira cidade (ex: A01):\n");
    scanf("%s", codigo1);
    printf("Digite o nome da primeira cidade:\n");
    scanf("%s", cidade1);
    printf("Digite a população da primeira cidade:\n");
    scanf("%d", &populacao1);
    printf("Digite a área da primeira cidade (em km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira cidade (em bilhões):\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira cidade:\n");
    scanf("%d", &pontosTuristicos1);

    // Cálculos para a primeira cidade
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;

    // Entrada de dados para a segunda carta
    printf("Digite o estado da segunda cidade (A-H):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta da segunda cidade (ex: B02):\n");
    scanf("%s", codigo2);
    printf("Digite o nome da segunda cidade:\n");
    scanf("%s", cidade2);
    printf("Digite a população da segunda cidade:\n");
    scanf("%d", &populacao2);
    printf("Digite a área da segunda cidade (em km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda cidade (em bilhões):\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade:\n");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a segunda cidade
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    return 0;
}



