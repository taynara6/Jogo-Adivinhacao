#include <stdio.h>
 main(int argc, char const *argv[])
{

printf("************************************\n");
printf("* Bem-vindo ao Jogo de Adivinhacao *\n");
printf("************************************\n");

//Lendo o teclado
int chute;
printf("Qual e seu chute?");
scanf("%d", &chute);
printf("Voce chutou o numero %d", chute);
 return 0;
}