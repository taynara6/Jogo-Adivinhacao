#include <stdio.h>
 main(int argc, char const *argv[])
{

printf("************************************\n");
printf("* Bem-vindo ao Jogo de Adivinhacao *\n");
printf("************************************\n");

//Lendo o teclado
int chute, numerosecreto;
numerosecreto = 42;
printf("Qual e seu chute?\n");
scanf("%d", &chute);
printf("Voce chutou o numero %d \n", chute);

//Controle de fluxo com if
if (chute==numerosecreto){
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
    
    
    printf("Mas não desanime, tente de novo!\n");

}

 return 0;
}