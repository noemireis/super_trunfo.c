#include <stdio.h>

// Definição da estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado;
    char codigo[5];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional; // Nova variável para a densidade
    float pib_per_capita; // Nova variável para o PIB per capita
} CartaSuperTrunfo;

int main() {
    // Declaração de duas variáveis do tipo CartaSuperTrunfo
    CartaSuperTrunfo carta1, carta2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("\nDigite o codigo da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", carta1.nome_cidade);

    printf("\nDigite a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("\nDigite a area (em km^2): ");
    scanf("%f", &carta1.area);

    printf("\nDigite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);

    printf("\nDigite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // --- CALCULO DOS DADOS ADICIONAIS PARA A CARTA 1 ---
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    // O PIB foi lido em bilhões, entao multiplicamos por 1.000.000.000
    carta1.pib_per_capita = (carta1.pib * 1000000000) / carta1.populacao;

    // --- CADASTRO DA CARTA 2 ---
    printf("\n\n--- Cadastro da Carta 2 ---\n\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("\nDigite o codigo da carta (ex: B02):");
    scanf("%s", carta2.codigo);

    printf("\nDigite o nome da cidade:");
    scanf("%s", carta2.nome_cidade);

    printf("\nDigite a populacao:");
    scanf("%d", &carta2.populacao);

    printf("\nDigite a area (em km^2):");
    scanf("%f", &carta2.area);

    printf("\nDigite o PIB (em bilhoes de reais):");
    scanf("%f", &carta2.pib);

    printf("\nDigite o numero de pontos turisticos:");
    scanf("%d", &carta2.pontos_turisticos);

    // --- CALCULO DOS DADOS ADICIONAIS PARA A CARTA 2 ---
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = (carta2.pib * 1000000000) / carta2.populacao;

    // --- EXIBIÇÃO DAS CARTAS ---
    printf("\n\n==================================\n");
    printf("--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km^2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontos_turisticos);
    // Exibição dos novos dados
    printf("Densidade Populacional: %.2f hab/km^2\n", carta1.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pib_per_capita);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km^2\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    // Exibição dos novos dados
    printf("Densidade Populacional: %.2f hab/km^2\n", carta2.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pib_per_capita);
    printf("==================================\n\n");

    return 0;
}
