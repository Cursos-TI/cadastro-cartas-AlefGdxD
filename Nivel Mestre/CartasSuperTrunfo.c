#include <stdio.h>

int main() {

  // Para não repetir a declaração de variavéis várias vezes decidi colocar todos em uma linha só para não usar muito espaço
  
  //Declaração das variavéis da carta Um
  char estadoCartaUm, codigoCartaUm[4], cidadeCartaUm[50];
  int pontosTuristicosCartaUm;
  unsigned long int populacaoCartaUm;
  float pibCartaUm, areaCartaUm, pibPerCapitaCartaUm, densidadePopulacionalCartaUm, superPoderCartaUm;

  //Declaração das variavéis da carta Dois
  char estadoCartaDois, codigoCartaDois[4], cidadeCartaDois[50];
  int pontosTuristicosCartaDois;
  unsigned long int populacaoCartaDois;
  float pibCartaDois, areaCartaDois, densidadePopulacionalCartaDois, pibPerCapitaCartaDois, superPoderCartaDois;


  printf("Bem-vindo ao jogo Super trunfo v1.2! \n");
  printf("Esta versão foi feita para comparação de cartas e o criar o Super Poder delas! \n");
  printf("Monte as duas super cartas e compare elas para ver qual é a mais forte! \n");

  // Input das informações da carta 1
  printf("Cadastre a primeira carta: \n");
  printf("Estado: "); 
  scanf(" %c", &estadoCartaUm);

  printf("Código: "); 
  scanf("%s", codigoCartaUm);

  printf("Cidade: "); 
  scanf("%s", cidadeCartaUm);

  printf("População: "); 
  scanf("%li", &populacaoCartaUm);

  printf("Área: "); 
  scanf("%f", &areaCartaUm);

  printf("PIB: "); 
  scanf("%f", &pibCartaUm);

  printf("Número de pontos turísticos: "); 
  scanf("%i", &pontosTuristicosCartaUm);


  // Input das informações da carta 2
  printf("\nAgora cadastre a segunda carta: \n");
  printf("Estado: "); 
  scanf(" %c", &estadoCartaDois);

  printf("Código: "); 
  scanf("%s", codigoCartaDois);

  printf("Cidade: "); 
  scanf("%s", cidadeCartaDois);

  printf("População: "); 
  scanf("%li", &populacaoCartaDois);

  printf("Área: "); 
  scanf("%f", &areaCartaDois);

  printf("PIB: "); 
  scanf("%f", &pibCartaDois);

  printf("Número de pontos turísticos: "); 
  scanf("%i", &pontosTuristicosCartaDois);
  
  
  // Calculo da densidade populacional e PIB por Capita da carta um
  densidadePopulacionalCartaUm = (float) populacaoCartaUm / areaCartaUm;
  pibPerCapitaCartaUm = (float) populacaoCartaUm / pibCartaUm;

  superPoderCartaUm = (float) populacaoCartaUm 
    + pibCartaUm 
    + pontosTuristicosCartaUm 
    + pibPerCapitaCartaUm
    + (1 / densidadePopulacionalCartaUm);

  // Calculo da densidade populacional, PIB por Capita e Super Poder da carta dois
  densidadePopulacionalCartaDois = (float) populacaoCartaDois / areaCartaDois;
  pibPerCapitaCartaDois = (float) populacaoCartaDois / pibCartaDois;

  superPoderCartaDois = (float) populacaoCartaDois 
    + pibCartaDois 
    + pontosTuristicosCartaDois 
    + pibPerCapitaCartaDois
    + (1 / densidadePopulacionalCartaDois);


  // Comparação/Lógica para comparar o que cada carta ganhou

  if (populacaoCartaUm > populacaoCartaDois) {
    printf("\n\nPopulação: Carta 1 venceu (%d)\n", populacaoCartaUm > populacaoCartaDois);
  } else {
    printf("\n\nPopulação: Carta 2 venceu (%d)\n", populacaoCartaUm > populacaoCartaDois);
  }

  if (areaCartaUm > areaCartaDois) {
    printf("Área: Carta 1 venceu (%d)\n", areaCartaUm > areaCartaDois);
  } else {
    printf("Área: Carta 2 venceu (%d)\n", areaCartaUm > areaCartaDois);
  }

  if (pibCartaUm > pibCartaDois) {
    printf("PIB: Carta 1 venceu (%d)\n", pibCartaUm > pibCartaDois);
  } else {
    printf("PIB: Carta 2 venceu (%d)\n", pibCartaUm > pibCartaDois);
  }

  if (pontosTuristicosCartaUm > pontosTuristicosCartaDois) {
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicosCartaUm > pontosTuristicosCartaDois);
  } else {
    printf("Pontos Turísticos: Carta 2 venceu (%d)\n", pontosTuristicosCartaUm > pontosTuristicosCartaDois);
  }

  if (densidadePopulacionalCartaUm > densidadePopulacionalCartaDois) {
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacionalCartaUm > densidadePopulacionalCartaDois);
  } else {
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacionalCartaUm > densidadePopulacionalCartaDois);
  }

  if (pibPerCapitaCartaUm > pibPerCapitaCartaDois) {
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapitaCartaUm > pibPerCapitaCartaDois);
  } else {
    printf("PIB per Capita: Carta 2 venceu (%d)\n", pibPerCapitaCartaUm > pibPerCapitaCartaDois);
  }

  if (superPoderCartaUm > superPoderCartaDois) {
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoderCartaUm > superPoderCartaDois);
  } else {
    printf("Super Poder: Carta 2 venceu (%d)\n", populacaoCartaUm > populacaoCartaDois);
  }

return 0;
} 
