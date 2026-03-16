#include <stdio.h>

int main() {

  // Para não repetir a declaração de variavéis várias vezes decidi colocar todos em uma linha só para não usar muito espaço
  char estadoCartaUm, codigoCartaUm[4], cidadeCartaUm[50];
  int populacaoCartaUm ,pontosTuristicosCartaUm;
  float areaCartaUm, pibCartaUm;
  
  char estadoCartaDois, codigoCartaDois[4], cidadeCartaDois[50];
  int populacaoCartaDois, pontosTuristicosCartaDois;
  float pibCartaDois, areaCartaDois, densidadePopulacionalCartaUm, 
  densidadePopulacionalCartaDois, pibPerCapitaCartaUm, pibPerCapitaCartaDois;


  printf("Bem-vindo ao jogo Super trunfo v1.1! \n");
  printf("Agora com novas funções como o calculo de densidade populacional e muito mais! \n");
  printf("Monte duas super cartas e veja seus status no terminal! \n");

  // Input das informações da carta 1
  printf("Cadastre a primeira carta: \n");
  printf("Estado: "); 
  scanf(" %c", &estadoCartaUm);

  printf("Código: "); 
  scanf("%s", codigoCartaUm);

  printf("Cidade: "); 
  scanf("%s", cidadeCartaUm);

  printf("População: "); 
  scanf("%i", &populacaoCartaUm);

  printf("Área: "); 
  scanf("%f", &areaCartaUm);

  printf("PIB: "); 
  scanf("%f", &pibCartaUm);

  printf("Número de pontos turísticos: "); 
  scanf("%i", &pontosTuristicosCartaUm);


  // Input das informações da carta 2
  printf("Agora cadastre a segunda carta: \n");
  printf("Estado: "); 
  scanf(" %c", &estadoCartaDois);

  printf("Código: "); 
  scanf("%s", codigoCartaDois);

  printf("Cidade: "); 
  scanf("%s", cidadeCartaDois);

  printf("População: "); 
  scanf("%i", &populacaoCartaDois);

  printf("Área: "); 
  scanf("%f", &areaCartaDois);

  printf("PIB: "); 
  scanf("%f", &pibCartaDois);

  printf("Número de pontos turísticos: "); 
  scanf("%i", &pontosTuristicosCartaDois);
  
  
  // Calculo da densidade populacional e PIB por Capita da carta um
  densidadePopulacionalCartaUm = populacaoCartaUm / areaCartaUm;
  pibPerCapitaCartaUm = populacaoCartaUm / pibCartaUm ;

  // Calculo da densidade populacional e PIB por Capita da carta dois
  densidadePopulacionalCartaDois = (float) populacaoCartaDois / areaCartaDois;
  pibPerCapitaCartaDois = (float) populacaoCartaDois / pibCartaDois;

  //Exibição da carta 1
  printf("\n\nCarta 1:");
  printf("\nEstado: %c", estadoCartaUm);
  printf("\nCódigo: %s", codigoCartaUm);
  printf("\nNome da Cidade: %s", cidadeCartaUm);
  printf("\nPopulação: %i", populacaoCartaUm);
  printf("\nÁrea: %.2f km²", areaCartaUm);
  printf("\nPIB: %.2f bilhões de reais", pibCartaUm);
  printf("\nNúmero de Pontos Turísticos: %i", pontosTuristicosCartaUm);
  printf("\nDensidade Populacional: %.2f", densidadePopulacionalCartaUm);
  printf("\nPIB per Capita: %.2f reais", pibPerCapitaCartaUm);

  //Exibição da carta 2
  printf("\n\nCarta 2:");
  printf("\nEstado: %c", estadoCartaDois);
  printf("\nCódigo: %s", codigoCartaDois);
  printf("\nNome da Cidade: %s", cidadeCartaDois);
  printf("\nPopulação: %i", populacaoCartaDois);
  printf("\nÁrea: %.2f km²", areaCartaDois);
  printf("\nPIB: %.2f bilhões de reais", pibCartaDois);
  printf("\nNúmero de Pontos Turísticos: %i", pontosTuristicosCartaDois);
  printf("\nDensidade Populacional: %.2f", densidadePopulacionalCartaDois);
  printf("\nPIB per Capita: %.2f reais", pibPerCapitaCartaDois);

return 0;
} 
