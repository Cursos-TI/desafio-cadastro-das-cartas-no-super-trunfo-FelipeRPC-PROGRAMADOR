#include <stdio.h>

typedef struct {
    char estado[20];
    char codigo[10];
    char nome_cidade[10];
    int populacao;
    float area;
    float pib; 
    int pontos_turisticos;
} Carta;

int main() {
    Carta carta1;
    Carta carta2;

    // --- ENTRADA DE DADOS PARA A PRIMEIRA CARTA ---
    printf("--- Digite as informacoes da CARTA 1 ---\n");

    printf("Digite o Estado: \n");
    scanf("%s", carta1.estado);

    printf("Digite o Codigo: \n");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", carta1.nome_cidade);

    printf("Digite a Populacao: \n");
    scanf("%d", &carta1.populacao);

    printf("Digite a Area: \n");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhoes): \n");
    scanf("%f", &carta1.pib);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &carta1.pontos_turisticos);

    // --- ENTRADA DE DADOS PARA A SEGUNDA CARTA ---
    printf("\n--- Digite as informacoes da CARTA 2 ---\n");

    printf("Digite o Estado: \n");
    scanf("%s", carta2.estado);

    printf("Digite o Codigo: \n");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", carta2.nome_cidade);

    printf("Digite a Populacao: \n");
    scanf("%d", &carta2.populacao);

    printf("Digite a Area: \n");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhoes): \n");
    scanf("%f", &carta2.pib);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &carta2.pontos_turisticos);

   
    float dens1 = carta1.populacao / carta1.area;
    float dens2 = carta2.populacao / carta2.area;

    float ppc1 = (carta1.pib * 1000000000.0) / carta1.populacao;
    float ppc2 = (carta2.pib * 1000000000.0) / carta2.populacao;

    float inv_dens1 = (dens1 > 0) ? 1.0 / dens1 : 0;
    float inv_dens2 = (dens2 > 0) ? 1.0 / dens2 : 0;

    float super1 = carta1.populacao + carta1.area + carta1.pib +
                   carta1.pontos_turisticos + ppc1 + inv_dens1;

    float super2 = carta2.populacao + carta2.area + carta2.pib +
                   carta2.pontos_turisticos + ppc2 + inv_dens2;

   
    printf("\n--- Comparacao ---\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           (carta1.populacao > carta2.populacao) ? 1 : 2,
           (carta1.populacao > carta2.populacao) ? 1 : 0);

    printf("Area: Carta %d venceu (%d)\n",
           (carta1.area > carta2.area) ? 1 : 2,
           (carta1.area > carta2.area) ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n",
           (carta1.pib > carta2.pib) ? 1 : 2,
           (carta1.pib > carta2.pib) ? 1 : 0);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 2,
           (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 0);

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (dens1 < dens2) ? 1 : 2,   // menor vence
           (dens1 < dens2) ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (ppc1 > ppc2) ? 1 : 2,
           (ppc1 > ppc2) ? 1 : 0);

    printf("Super Poder: Carta %d venceu (%d)\n",
           (super1 > super2) ? 1 : 2,
           (super1 > super2) ? 1 : 0);

    return 0;
}


