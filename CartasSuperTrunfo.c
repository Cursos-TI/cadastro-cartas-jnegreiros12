#include <stdio.h>
#include <string.h>

int main() {

char Nestado1[2], Nestado2[2];
char Codigo1[4], Codigo2[4];
char Ncidade1[170];
char Ncidade2[170];
int Nhabitantes1, Nhabitantes2;
float Km1, Km2;
float Pib1, Pib2;
int PTuristico1, PTuristico2;

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
scanf ("%d", &Nhabitantes1);

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
scanf ("%d", &Nhabitantes2);

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

printf ("Habitantes: %d \n", Nhabitantes1);

printf ("Área: %.2f km² \n", Km1);
printf ("PIB: R$ %.2f \n", Pib1);

printf ("Pontos Turísticos: %d \n", PTuristico1);

printf ("Carta2 : \n");
printf ("Estado: %s \n", Nestado2);
printf ("Código: %s \n", Codigo2);
printf ("Cidade: %s \n", Ncidade2);

printf ("Habitantes: %d \n", Nhabitantes2);

printf ("Área: %.2f km² \n", Km2);
printf ("PIB: R$ %.2f \n", Pib2);

printf ("Pontos Turísticos: %d \n", PTuristico2);

return 0;
}
