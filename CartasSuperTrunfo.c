#include <stdio.h>

int main (){
// Nível Novato
//Declaração de variáveis:
char Estado1, Estado2, Codigo1 [5], Codigo2 [5], Cidade1 [50], Cidade2 [50];
int Populacao1, Populacao2, PontosTuristicos1, PontosTuristicos2;
float Area1, Area2, PIB1, PIB2;


//Entrada de dados:
printf("\n Bem-vindo(a), ao super Trunfo!\n");
printf("\nCarta 1!\n");
printf("Informe somente uma letra de um Estado: \n");
scanf(" %c",&Estado1);
printf("Digite o código da sua carta (Ex: A01): \n");
scanf("%s",&Codigo1);
printf("Digite o nome da cidade: \n");
scanf("%s",&Cidade1);
printf("Informa a população da cidade (sem espaços): \n");
scanf("%d",&Populacao1);
printf("Digite a Área em km²: \n");
scanf("%f",&Area1);
printf("Informe o PIB: \n");
scanf("%f",&PIB1);
printf("Informe quantos pontos turísticos a cidade possui: \n");
scanf("%d",&PontosTuristicos1);


printf("\nCarta 2!\n");
printf("Informe somente uma letra de um Estado: \n");
scanf(" %c",&Estado2);
printf("Digite o código da sua carta (Ex: B02): \n");
scanf("%s",&Codigo2);
printf("Digite o nome da cidade (sem espaços): \n");
scanf("%s",&Cidade2);
printf("Informa a população da cidade: \n");
scanf("%d",&Populacao2);
printf("Digite a Área em km²: \n");
scanf("%f",&Area2);
printf("Informe o PIB: \n");
scanf("%f",&PIB2);
printf("Informe quantos pontos turísticos a cidade possui: \n");
scanf("%d",&PontosTuristicos2);

// Saída de dados:
printf("\nCarta 1!\n");
printf("Estado: %c\n", Estado1);
printf("Código: %s\n",Codigo1);
printf("Cidade: %s\n",Cidade1);
printf("População: %d\n",Populacao1);
printf("Área: %.2f km²\n",Area1);
printf("PIB: %.2f Bilhões de reais\n",PIB1);
printf("Pontos Turísticos: %d\n",PontosTuristicos1);

printf("\nCarta 2!\n");
printf("Estado: %c\n", Estado2);
printf("Código: %s\n",Codigo2);
printf("Cidade: %s\n",Cidade2);
printf("População: %d\n", Populacao2);
printf("Área: %.2f km²\n",Area2);
printf("PIB: %.2f Bilhões de reais\n",PIB2);
printf("Pontos Turísticos: %d\n",PontosTuristicos2);

printf("\nFim de jogo!\n");

return 0;




}