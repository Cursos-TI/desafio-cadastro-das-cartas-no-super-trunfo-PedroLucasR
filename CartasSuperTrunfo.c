#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Pedro Lucas

// Super Trunfo Nível Novato

//Utilizei uma classe para pegar os dados da carta
//Classe das Cartas
typedef struct {
    char codigo[4], estado[3], cidade[20];
    int populacao;
    float area, PIB;
    int pontosTuristicos;
} Carta;

int main(void) {
  Carta  carta1,carta2;

    //Cadastro da primeira carta
    printf("Cadastro da Primeira Carta \n");
    printf("Insira o Estado: ");
    scanf("%s",carta1.estado);
    printf("Insira o codigo da cidade: ");
    scanf("%s", carta1.codigo);
    printf("Insira o nome da Cidade: ");
    scanf("%s", carta1.cidade);
    printf("Insira a populacao da cidade: ");
    scanf("%d", &carta1.populacao);
    printf("Insira a area da cidade: ");
    scanf("%f", &carta1.area);
    printf("Insira o PIB: ");
    scanf("%f", &carta1.PIB);
    printf("Insira a pontos turistos: ");
    scanf("%d", &carta1.pontosTuristicos);

    //Cadastro segunda carta
    printf("Cadastro da Segunda Carta\n");
    printf("Insira o Estado: ");
    scanf("%s",carta2.estado);
    printf("Insira o codigo da cidade: ");
    scanf("%s", carta2.codigo);
    printf("Insira o nome da Cidade: ");
    scanf("%s", carta2.cidade);
    printf("Insira a populacao da cidade: ");
    scanf("%d", &carta2.populacao);
    printf("Insira a area da cidade: ");
    scanf("%f", &carta2.area);
    printf("Insira o PIB: ");
    scanf("%f", &carta2.PIB);
    printf("Insira a pontos turistos: \n");
    scanf("%d", &carta2.pontosTuristicos);

    //Print da primeira carta
    printf(" Dados da primeira carta \n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao da cidade: %d\n", carta1.populacao);
    printf("Area da cidade: %.2f km²\n", carta1.area);
    printf("PIB: %f\n", carta1.PIB);
    printf("Pontos Turistico: %d\n", carta1.pontosTuristicos);

    //Print da segunda carta
    printf("\n Dados da Segunda carta \n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao da cidade: %d\n", carta2.populacao);
    printf("Area da cidade: %.2f km²\n", carta2.area);
    printf("PIB: %f\n", carta2.PIB);
    printf("Pontos Turistico: %d\n", carta2.pontosTuristicos);



}