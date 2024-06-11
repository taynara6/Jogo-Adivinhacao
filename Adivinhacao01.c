#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 3
 main(int argc, char const *argv[])
{

    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Adivinhacao *\n");
    printf("************************************\n");
    for (int i = 1; i <=NUMERO_DE_TENTATIVAS; i++)
    {


        int chute, numerosecreto, acertou;
        numerosecreto = 42;
        printf("Qual e seu chute?\n");
        scanf("%d", &chute);
         if (chute<0)
        {
            printf("Numero negativo nao e asseito, tente novamente!\n");
            i--;
            continue;
        }
        printf("Seu %do. chute foi %d\n", i, chute);
        acertou = chute == numerosecreto;

        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;

        if (acertou)
        {   
            printf("Parabens! Voce acerto o numero secreto. \n");
            break;
        }
        if (maior)
        {
        printf("Voce chutou um numero maior que o numero secreto.\n");
        }
        if(menor)
        {
        printf("Voce chutou um numero menor que o numero secreto.\n");
        }   

    }
    printf("Obrigado(a) por jogar! \n");
    printf("Fim de Jogo!!\n");
    return 0;
}