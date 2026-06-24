#include <stdio.h>


//CARTA A1 //

int main() {
char estado1 [50];
char codigoA1 [5];
char cidade1 [50];
int  populacao1;
float area1;
float pib1;
int numerosDePontosTuristicos1;


//CARTA A2 //

char estado2 [50];
char codigoA2 [5];
char cidade2 [50];
int populacao2;
float area2;
float pib2;
int numerosDePontosTuristicos2;


//ENTRADA DE DADOS DA CARTA A1//

printf("Digite o nome do estado:\n");
scanf(" %[^\n]", estado1);

printf("Digite o codigo:\n");
scanf(" %s", codigoA1);

printf("Digite o nome da cidade:\n");
scanf(" %[^\n]", cidade1);

printf("Digite o numero da populacao:\n");
scanf(" %d", &populacao1);

printf("Digite o tamanho da area:\n");
scanf(" %f", &area1);

printf("Digite o pib:\n");
scanf(" %f", &pib1);

printf("Digite o numero de pontos turisticos:\n");
scanf(" %d", &numerosDePontosTuristicos1);

//ENTRADA DE DADOS DA CARTA A2//
printf("Digite o nome do estado:\n");
scanf(" %[^\n]", estado2);

printf("Digite o codigo:\n");
scanf(" %s", codigoA2);

printf("Digite o nome da cidade:\n");
scanf(" %[^\n]", cidade2);

printf("Digite o numero da populacao:\n");
scanf(" %d", &populacao2);

printf("Digite o tamanho da area:\n");
scanf(" %f", &area2);

printf("Digite o pib:\n");
scanf(" %f", &pib2);

printf("Digite o numeros de pontos turistico:\n");
scanf(" %d", &numerosDePontosTuristicos2);

//EXIBIÇÂO DAS CARTAS//


//CARTA 1//

printf("Carta 1:\n");
printf("Estado: %s\n",estado1);
printf("Codigo: %s\n", codigoA1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Àrea: %.2f km²\n", area1);
printf("Pib: %.2f\n", pib1);
printf("Numeros de pontos turisticos: %d\n", numerosDePontosTuristicos1);
printf("\n");
///CARTA 2//
printf("Carta 2:\n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigoA2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Àrea: %.2f km²\n", area2);
printf("Pib: %.2f\n", pib2);
printf("Numeros de pontos turisticos: %d\n", numerosDePontosTuristicos2);








    return 0;

}