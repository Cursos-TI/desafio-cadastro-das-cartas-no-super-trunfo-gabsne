#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira cidade (A-H):\n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta da primeira cidade (ex: A01):\n");
    scanf("%s", codigo1);
    printf("Digite o nome da primeira cidade:\n");
    scanf("%s", cidade1);
    printf("Digite a população da primeira cidade:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área da primeira cidade (em km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira cidade (em bilhões):\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira cidade:\n");
    scanf("%d", &pontosTuristicos1);

    // Cálculos para a primeira cidade
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    superPoder1 = populacao1 + area1 + (pib1 * 1e9) + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    // Entrada de dados para a segunda carta
    printf("Digite o estado da segunda cidade (A-H):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta da segunda cidade (ex: B02):\n");
    scanf("%s", codigo2);
    printf("Digite o nome da segunda cidade:\n");
    scanf("%s", cidade2);
    printf("Digite a população da segunda cidade:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área da segunda cidade (em km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda cidade (em bilhões):\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade:\n");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a segunda cidade
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;
    superPoder2 = populacao2 + area2 + (pib2 * 1e9) + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}




