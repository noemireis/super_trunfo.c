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
    float super_poder; //variavel super poder
} CartaSuperTrunfo;

int main() {
    // Declaração de duas variáveis do tipo CartaSuperTrunfo
    CartaSuperTrunfo carta1, carta2;

    // --- CADASTRO DA CARTA 1 ---
    printf("\n\n--- Cadastro da Carta 1 ---\n\n");
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

    carta1.densidade_populacional = carta1.populacao / carta1.area;
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

     printf("\n\n---COMPARAÇÃO DE CARTAS---\n\n");
    //comparação população
    if (carta1.populacao> carta1.populacao){
        printf("população:carta 1 venceu\n");
    }else{
        printf("população:carta 2 venceu\n");
    }
//comparação de àrea
if (carta1.area > carta2.area){
    printf("Area: carta 1 venceu\n");
}else{
    printf("Area: carta 2 venceu\n");
}

//comparação PIB
   if (carta1.pib > carta2.pib){
     printf("pib: carta 1 venceu\n");
     }else{
    printf("pib: carta 2 vnceu\n");
   }
//comparação de pontos turisticos
if(carta1.pontos_turisticos > carta2.pontos_turisticos){
    printf("pontos turisticos:carta 1 venceu \n");
}else{
    printf("pontos turisticos: carta 2 venceu \n");
}
//comparação de Densidade Populacional(a menor vence)
if(carta1.densidade_populacional < carta2.densidade_populacional){
   printf("densidae poulacional:carta 1 venceu\n");
}else{
    printf("densidade populacional: carta 2 venceu\n");
}
//comparação de PIB per capita
if(carta1.pib_per_capita > carta2.pib_per_capita){
    printf("PIB per capita: carta 1 venceu\n");
}else{
    printf("PIB per capita: carta 2 venceu\n");
}
//comparção de Super Poder
if(carta1.super_poder > carta2.super_poder){
    printf("Super Poder: carta 1 venceu\n");
}else{
    printf("super poder: carta 2 venceu\n");
}

    return 0;
}
