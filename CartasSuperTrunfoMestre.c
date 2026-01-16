#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[20];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[20];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // --- CADASTRO DA CARTA 1 ---
    printf("***Cadastro da Carta 01***\n");

    printf("Digite o Estado (uma letra de A-H): ");
    scanf("%c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("---------------------------\n");

    // --- CADASTRO DA CARTA 2 ---
    printf("=== Cadastro da Carta 02 ===\n");

    printf("Digite o Estado (uma letra de A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%19s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- CALCULOS ---
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    superPoder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        (float)pontosTuristicos1 +
        pibPerCapita1 +
        (1.0f / densidade1);

    superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        (float)pontosTuristicos2 +
        pibPerCapita2 +
        (1.0f / densidade2);

    // DEFINIR QUAL CARTA É A VENCEDORA GERAL (MAIOR SUPER PODER)
    int cartaVencedora; // 1 ou 2
    if (superPoder1 > superPoder2) {
        cartaVencedora = 1;
    } else if (superPoder2 > superPoder1) {
        cartaVencedora = 2;
    }

    printf("\n===========================\n");
    printf("DADOS CADASTRADOS\n");
    printf("===========================\n");

    //  EXIBICAO DA CARTA 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // EXIBICAO DA CARTA 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    //  COMPARACOES BASEADAS NA CARTA VENCEDORA GERAL
    printf("===========================\n");
    printf("Comparacao de Cartas:\n");

    if (cartaVencedora == 1) {
        printf("Populacao: Carta 1 venceu (1)\n");
        printf("Area: Carta 1 venceu (1)\n");
        printf("PIB: Carta 1 venceu (1)\n");
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
        printf("PIB per Capita: Carta 1 venceu (1)\n");
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else if (cartaVencedora == 2) {
        printf("Populacao: Carta 2 venceu (1)\n");
        printf("Area: Carta 2 venceu (1)\n");
        printf("PIB: Carta 2 venceu (1)\n");
        printf("Pontos Turisticos: Carta 2 venceu (1)\n");
        printf("Densidade Populacional: Carta 2 venceu (1)\n");
        printf("PIB per Capita: Carta 2 venceu (1)\n");
        printf("Super Poder: Carta 2 venceu (1)\n");
    
    }

    return 0;
}
