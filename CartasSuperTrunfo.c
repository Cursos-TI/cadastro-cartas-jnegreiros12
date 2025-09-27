#include <stdio.h>
#include <string.h>

int main() {

char Nestado1[2], Nestado2[2];
char Codigo1[4], Codigo2[4];
char Ncidade1[170];
char Ncidade2[170];
unsigned long int Nhabitantes1, Nhabitantes2;
float Km1, Km2;
float Pib1, Pib2;
int PTuristico1, PTuristico2;
float DP1, DP2;
float invDP1, invDP2;
float PibPC1, PibPC2;
float SuperPoder1, SuperPoder2;

printf ("Bem vindo ao Super Trunfo! \n");
printf ("Cadastre suas cartas para jogar! \n");

// CRIAÇÃO PRIMEIRA CARTA

printf ("Primeira Carta: \n");
printf ("Escolha uma Letra de A a H: \n");
scanf ("%s", Nestado1);

printf ("Agora escolha um código para sua carta!: \n");
printf ("OBS: O código deve ser a primeira letra do estado seguido de um número de 01 a 04 (ex: A01, B02, C03) \n");
scanf ("%s", Codigo1);

while(getchar() != '\n');

printf ("Muito bem, agora escolha o nome da cidade para sua carta!: \n");
fgets(Ncidade1, sizeof(Ncidade1), stdin);
Ncidade1[strcspn(Ncidade1, "\n")] = '\0';

printf ("Agora informe a quantidade de habitantes do estado para sua carta!: \n");
scanf ("%lu", &Nhabitantes1);

printf ("Agora informe a área do estado de sua carta! (em km²): \n");
scanf ("%f", &Km1);

printf ("Agora informe o PIB do estado de sua carta! (em R$): \n");
scanf ("%f", &Pib1);

printf ("Agora escolha a pontuação turística do estado de sua carta (de 0 a 100): \n");
scanf ("%d", &PTuristico1);

printf ("Parabéns, sua primeira carta foi criada com sucesso, agora vamos criar a segunda!: \n");

// CRIAÇÃO SEGUNDA CARTA

printf ("Segunda Carta: \n");
printf ("Escolha uma Letra de A a H: \n");
scanf ("%s", Nestado2);

printf ("Agora escolha um código para sua carta!: \n");
printf ("OBS: O código deve ser a primeira letra do estado seguido de um número de 01 a 04 (ex: A01, B02, C03) \n");
scanf ("%s", Codigo2);

while(getchar() != '\n');  

printf ("Muito bem, agora escolha o nome da cidade para sua carta!: \n");
fgets(Ncidade2, sizeof(Ncidade2), stdin);
Ncidade2[strcspn(Ncidade2, "\n")] = '\0';

printf ("Agora informe a quantidade de habitantes do estado para sua carta!: \n");
scanf ("%lu", &Nhabitantes2);

printf ("Agora informe a área do estado de sua carta! (em km²): \n");
scanf ("%f", &Km2);

printf ("Agora informe o PIB do estado de sua carta! (em R$): \n");
scanf ("%f", &Pib2);

printf ("Agora escolha a pontuação turística do estado de sua carta (de 0 a 100): \n");
scanf ("%d", &PTuristico2);

printf ("Parabéns, a criação de suas cartas foram concluídas com sucesso! \n");

printf ("Carta1 : \n");
printf ("Estado: %s \n", Nestado1);
printf ("Código: %s \n", Codigo1);
printf ("Cidade: %s \n", Ncidade1);

printf ("Habitantes: %lu \n", Nhabitantes1);

printf ("Área: %.2f km² \n", Km1);
printf ("PIB: R$ %.2f \n", Pib1);

printf ("Pontos Turísticos: %d \n", PTuristico1);

DP1 = (float) Nhabitantes1 / Km1;
printf ("Densidade Populacional: %.2f Hab/Km² \n", DP1);

PibPC1 = (float) Pib1 / Nhabitantes1;
printf ("PIB per capita: R$ %.2f \n", PibPC1);

invDP1 = (float) Km1 / Nhabitantes1;

SuperPoder1 = (float) Nhabitantes1 + Km1 + Pib1 + PTuristico1 + PibPC1 + invDP1 ;
printf ("SuperPoder Total da Carta1: %.2f \n", SuperPoder1);

printf ("Carta2 : \n");
printf ("Estado: %s \n", Nestado2);
printf ("Código: %s \n", Codigo2);
printf ("Cidade: %s \n", Ncidade2);

printf ("Habitantes: %lu \n", Nhabitantes2);

printf ("Área: %.2f km² \n", Km2);
printf ("PIB: R$ %.2f \n", Pib2);

printf ("Pontos Turísticos: %d \n", PTuristico2);

DP2 = (float) Nhabitantes2 / Km2;
printf ("Densidade Populacional: %.2f Hab/Km² \n", DP2);

PibPC2 = (float) Pib2 / Nhabitantes2;
printf ("PIB per capita: R$ %.2f \n", PibPC2);

invDP2 = (float) Km2 / Nhabitantes2;

SuperPoder2 = (float) Nhabitantes2 + Km2 + Pib2 + PTuristico2 + PibPC2 + invDP2 ;
printf ("SuperPoder Total da Carta2: %.2f \n", SuperPoder2);

//COMPARAÇÃO DE CARTAS

printf("\n>>>COMPARAÇÃO DAS CARTAS<<<\n");
printf("\n>>> CARTA1 = 1 <<<\n");
printf("\n>>> CARTA2 = 0 <<<\n");
printf(">População: %d\n", (Nhabitantes1 > Nhabitantes2)?1:0);
printf(">Área: %d\n", (Km1 > Km2)?1:0);
printf(">PIB: %d\n", (Pib1 > Pib2)?1:0);
printf(">Pontos Turísticos: %d\n", (PTuristico1 > PTuristico2)?1:0);
printf(">PIB Per Capita: %d\n", (PibPC1 > PibPC2)?1:0);
printf(">Densidade Populacional: %d\n", (DP1 > DP2)?1:0);
printf(">Super Poder: %d\n", (SuperPoder1 > SuperPoder2)?1:0);

return 0;
}