#include <stdio.h>

int main(){

// definindo variáveis para a carta 1
char codigo_carta1[4]="A01";
char nome_cidade1[20]="Goiania";   
char estado1='g';
float Área1=340.086;
float Pib1= 318.586;
int Populacao1=1503256;
int turisticos1=30;
//calculo para carta 1
float densidade_1=Populacao1/Área1;
float pib_per_capita_1=(Pib1*1000000000000)/Populacao1;

// definindo variáveis para a carta 2
char codigo_carta2[4]="B01";
char nome_cidade2[20]="Amapá";
char estado2='A';
float Área2=9203.50;
float pib2=5215.130;
int populacao2=806517;
int turisticos2=14;
float densidade_2=populacao2/Área2;
float pib_per_capita_2=(pib2*1000000000000)/populacao2;



//saida carta 1
printf("\nDados da carta 1\n");
printf("estado:%c\n",estado1);
printf("codigo:%s\n",codigo_carta1);
printf("nome da cidade:%s\n",nome_cidade1);
printf("População:%d\n",Populacao1);
printf("Área:%.2f  Km²\n",Área1);
printf("Pib:%.2f bilhões de reais\n",Pib1);
printf("pontos turisticos:%i\n",turisticos1);
printf("Densidade populacional:%.2f hab/km²\n",densidade_1);
printf("Pib per capita:%.2f reais\n",pib_per_capita_1);


//saida carta 2
printf("\nDados da carta 2\n");
printf("nome da cidade:%s\n",nome_cidade2);
printf("estado2:%c\n",estado2);
printf("codigo:%s\n",codigo_carta2);
printf("população:%d\n",populacao2);
printf("Área:%.2f Km²\n",Área2);
printf("pib:%.2f bilhões de reais\n",pib2);
printf("pontos turisticos:%i\n",turisticos2);
printf("Densidade populacional:%.2f hab/km²\n",densidade_2);
printf("Pib per capita:%.2f reais\n",pib_per_capita_2);

return 0;

}

