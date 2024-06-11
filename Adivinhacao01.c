#include <stdio.h>
 main(int argc, char const *argv[])
{

printf("************************************\n");
printf("* Bem-vindo ao Jogo de Adivinhacao *\n");
printf("************************************\n");
for (int i = 1; i <=3; i++)
{

//Lendo o teclado
int chute, numerosecreto, acertou;
numerosecreto = 42;
printf("Qual e seu chute?\n");
scanf("%d", &chute);
printf("Seu %do. chute foi %d\n", i, chute);
acertou = chute == numerosecreto;
//Controle de fluxo com if
/*if (chute==numerosecreto){
    printf("Parabens! Voce acertou.\n");
    printf("Jogue de novo, você é um bom jogador!\n");
}
else {
    printf("Voce errou!\n");
    if (chute>numerosecreto)
    {
        printf("O seu chute foi maior que o numero secreto \n");
    }
    if (chute<numerosecreto)
    {
        printf("O seu chute foi menor que o numero secreto \n");
    }
    printf("Mas nao desanime, tente de novo!\n");
}*/
// Melhorar a legibilidade do codigo
if (acertou)
{
   printf("Parabens! Voce acerto o numero secreto. \n");
    break;
}
else
{
    printf("Acertou: %d\n", acertou);
    printf("Voce errou!\n");
    int maior;
    maior = chute > numerosecreto;
    if (maior)
    {
       printf("Voce chutou um numero maior que o numero secreto.\n");
    }
    else
    {
       printf("Voce chutou um numero menor que o numero secreto.\n");
    }   
}
}
printf("Obrigado(a) por jogar! \n");
printf("Fim de Jogo!!\n");
return 0;
}