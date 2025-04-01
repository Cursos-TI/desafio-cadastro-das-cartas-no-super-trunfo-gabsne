#include <stdio.h> 

int main(){ 
   char estado1;
   char codigodacarta1[40];
   char cidade1[50];
   int populacao1;
   float area1;
   float pib1;
   int pontosturisticos1;
 
   printf("digite a sigla do estado: \n");
   scanf("%c", &estado1);

   printf("digite o codigo da carta: \n");
   scanf("%c", &codigodacarta1);

   printf("digite um nome para sua cidade: \n");
   scanf("%s", &cidade1);
   
   printf("digite o numero de habitantes da cidade: \n");
   scanf("%d", &populacao1);
 
   printf("digite a area da cidade em km: \n");
   scanf("%f", &area1);

   printf("digite o valor do produto interno bruto da cidade: \n");
   scanf("%e", &pib1);

   printf("digite a quantidade de pontos turisticos na cidade: \n");
   scanf("%d", &pontosturisticos1);

   return 0;
}