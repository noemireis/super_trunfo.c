#include <stdio.h>
#include <string.h>

// Definição da estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado;
    char codigo[5];
    char pais [50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica; // Nova variável para a densidade
    float pib_per_capita; // Nova variável para o PIB per capita
   float super_poder; //Novo atribuuto para soma de poderes
   

} CartaSuperTrunfo;

    int main() {
    // Declaração de duas variáveis do tipo CartaSuperTrunfo
    CartaSuperTrunfo carta1, carta2;

   int vitorias_carta1=0;
   int vitorias_carta2=0;//contadores para cada carta


    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("\nDigite o codigo da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", carta1.pais);

    printf("\nDigite a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("\nDigite a area (em km^2): ");
    scanf("%f", &carta1.area);

    printf("\nDigite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);

    printf("\nDigite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // --- CALCULO DOS DADOS ADICIONAIS PARA A CARTA 1 ---
    carta1.densidade_demografica = carta1.populacao / carta1.area;
    // O PIB foi lido em bilhões, entao multiplicamos por 1.000.000.000
    carta1.pib_per_capita = (carta1.pib * 1000000000) / carta1.populacao;

    //---CALCULO DO SUPER PODER DA CARTA 1----
     carta1.super_poder=(float)carta1.populacao+carta1.area+carta1.pib+(float)carta1.pontos_turisticos+carta1.pib_per_capita+(1.0/carta1.densidade_demografica);
    

    // --- CADASTRO DA CARTA 2 ---
    printf("\n\n--- Cadastro da Carta 2 ---\n\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("\nDigite o codigo da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", carta2.pais);

    printf("\nDigite a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("\nDigite a area (em km^2): ");
    scanf("%f", &carta2.area);

    printf("\nDigite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);

    printf("\nDigite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // --- CALCULO DOS DADOS ADICIONAIS PARA A CARTA 2 ---
    carta2.densidade_demografica = carta2.populacao / carta2.area;
    carta2.pib_per_capita = (carta2.pib * 1000000000) / carta2.populacao;
       
    //---CALCULO DO SUPER PODER DA CARTA 1----
   carta1.super_poder=(float)carta1.populacao+carta1.area+carta1.pib+(float)carta1.pontos_turisticos+carta1.pib_per_capita+(1.0/carta1.densidade_demografica);

    // --- EXIBIÇÃO DAS CARTAS ---
    printf("\n\n==================================\n");
    printf("--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.pais);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km^2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km^2\n", carta1.densidade_demografica);
    printf("PIB per Capita: %.2f reais\n", carta1.pib_per_capita);
    

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.pais);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km^2\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km^2\n", carta2.densidade_demografica);
    printf("PIB per Capita: %.2f reais\n", carta2.pib_per_capita);
    printf("==================================\n\n");
   
    
   printf("\nComparação de cartas: %s x %d\n", carta1,carta2);
   
   int opcao;
      printf("\n\n---COMPARAÇÃO DE CARTAS---\n\n");
     printf("1.População\n");
     printf("2.Area\n");
     printf("3.PIb\n");
     printf("4.Pontos turisticos\n");
     printf("5.Densidade Demografica\n");
     printf("Escolha o atributo para comparar:");
     scanf("%d", &opcao);

     switch (opcao){
        case 1: //população
        printf("Atributo escolhido: população\\n");
        printf("%s: %d habitantes\\n",carta1.pais, carta1.populacao);
        printf("%s: %d habitantes\\n",carta2.pais, carta2.populacao);
        
        if (carta1.populacao > carta2.populacao){
        printf("Resultado: carta 1 venceu!\n", carta1.pais);
     }
     else if (carta1.populacao < carta2.populacao){
        printf("Resultado: carta 2 %s venceu!\n", carta2.pais);
     }else {
        printf("Houve um empate!\n");
     }
    
         break;
         case 2: //Área
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", carta1.pais, carta1.area);
            printf("%s: %.2f km²\n", carta2.pais, carta2.area);
             if(carta1.area > carta2.area) {
                printf("Resultado: Carta 1 %s Venceu!\n", carta1.pais);
            } else if(carta1.area < carta2.area) {
                printf("Resultado: Carta 2 %s Venceu!\n", carta2.pais);
            } else {
                printf("Houve um empate!\n");
            }
            
        break;
        
        case 3: //PIB
            printf("Atributo escolhido: PIB (bilhões de reais)\n");
            printf("%s: %.2f bilhões de reais\n", carta1.pais, carta1.pib);
            printf("%s: %.2f bilhões de reais\n",  carta2.pais, carta2.pib);

            if(carta1.pib > carta2.pib){
                printf("Resultado: Carta 1 %s Venceu!\n", carta1.pais);
            } else if(carta1.pib < carta2.pib) {
                printf("Resultado: Carta 2 %s Venceu!\n",  carta2.pais);
            } else {
                printf("Houve um empate!\n");
            }
             break;

        case 4: //Pontos Turísticos
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n",carta1.pais, carta1.pontos_turisticos);
            printf("%s: %d pontos turísticos\n", carta2.pais, carta1.pontos_turisticos);

            if(carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("Resultado: Carta 1 %s Venceu!\n", carta1.pais);
            } else if(carta1.pontos_turisticos < carta2.pontos_turisticos) {
                printf("Resultado: Carta 2 %s Venceu!\n", carta2.pais);
            } else {
                printf("Houve um empate!\n");
            }
            break;

        case 5: //Densidade Demográfica
            printf("Atributo escolhido: Densidade Demográfica (menor vence!)\n");
            printf("%s: %.2f hab/km²\n",carta1.pais, carta1.densidade_demografica);
            printf("%s: %.2f hab/km²\n", carta2.pais, carta2.densidade_demografica);

            if(carta1.densidade_demografica < carta2.densidade_demografica) { // menor vence
                printf("Resultado: Carta 1 %s Venceu!\n",carta1.pais);
            } else if(carta1.densidade_demografica > carta2.densidade_demografica) {
                printf("Resultado: Carta 2 %s Venceu!\n",carta2.pais);
            } else {
                printf("Houve um empate!\n");
            }
            break;
           default:
           printf("opção inválida!\n");

           break;





     }


    return 0;

    }