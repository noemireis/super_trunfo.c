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
   
   int opcao1, opcao2;
   int resultado1, resultado2;
      printf("\n\n---COMPARAÇÃO DE CARTAS---\n\n");
      printf("Escolha o primero atributo.\n");
     printf("1.População\n");
     printf("2.Area\n");
     printf("3.PIb\n");
     printf("4.Pontos turisticos\n");
     printf("5.Densidade Demografica\n");

     printf("Escolha o atributo para comparar:");
     scanf("%d", &opcao1);

     switch (opcao1){
        case 1: //população
        printf("Voçe escolheu a opção População!\n");
        resultado1 = carta1.populacao > carta2.populacao ? 1:0;
        break;
    
        
         case 2: //Área
            printf(" Voçe escolheu o Atributo  Área\n");
            resultado1 = carta1.area > carta2.area ? 1:0;
           
        break;
        
        case 3: //PIB
            printf("Atributo escolhido  PIB \n");
            resultado1 = carta1.pib > carta2.pib ? 1:0;
          
             break;

        case 4: //Pontos Turísticos
          printf("Você escolheu a opção Pontos Turísticos!\n");
            resultado1 = carta1.pontos_turisticos >carta2.pontos_turisticos ? 1 : 0;
     
            break;

        case 5: //Densidade Demográfica
                   printf("Você escolheu a opção Densidade Demográfica!\n");
            resultado1 = carta1.densidade_demografica < carta2.densidade_demografica ? 1 : 0;
   
            break;
           default:
           printf("opção inválida!\n");

           break;
     }
      
     printf("Escolha o segundo atributo.\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demografica\n");

    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("Você escolheu o mesmo atributo!\n");
    } else {
        switch (opcao2) {
            case 1:
                printf("Você escolheu a opção População!\n");
                resultado2 = carta1.populacao > carta2.populacao ? 1 : 0;
                break;

            case 2:
                printf("Você escolheu a opção Área!\n");
                resultado2 = carta1.area > carta2.area ? 1 : 0;
                break;

            case 3:
                printf("Você escolheu a opção PIB!\n");
                resultado2 = carta1.pib > carta2.pib  ? 1 : 0;
                break;

            case 4:
                printf("Você escolheu a opção Pontos Turísticos!\n");
                resultado2 = carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 0;
                break;

            case 5:
                printf("Você escolheu a opção Densidade Demográfica!\n");
                resultado2 = carta1.densidade_demografica > carta2.densidade_demografica  ? 1 : 0;
                break;
            default:
                printf("Opção inválida!\n");
        }

        // Resultado final
        if (resultado1 && resultado2) {
            printf("Carta 1 (%s) venceu a comparação!\n", carta1.pais);
        } else if (resultado1 != resultado2) {
            printf("Empate na comparação!\n");
        } else {
            printf("Carta 2 (%s) venceu a comparação!\n", carta2.pais);
        }
    }

    return 0;

    }