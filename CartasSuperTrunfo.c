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
   
   // --- ENTRADA DE DADOS PARA A PRIMERA CARTA --- 

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

    printf("Digite o pib: \n");
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

    printf("Digite o pib: \n");
    scanf("%f", &carta2.pib);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &carta2.pontos_turisticos);

    return 0;
}
    


