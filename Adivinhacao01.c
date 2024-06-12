#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 3
 main(int argc, char const *argv[])
{

    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Adivinhacao *\n");
    printf("************************************\n");
    int acertou = 0;
    int tentativas = 1;
    int chute;
    int numerosecreto = 42;
    while (1)
    {

        printf("Qual e seu %do chute?\n", tentativas);
        scanf("%d", &chute);
         if (chute<0)
        {
            printf("Numero negativo nao e asseito, tente novamente!\n");
            continue;
        }
        printf("Seu %do. chute foi %d\n", tentativas, chute);
        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if (acertou)
        {   
            printf("Parabens! Voce acerto o numero secreto. \n");
            acertou = 1;
            break;
        }
        else if (maior)
        {
            printf("Voce chutou um numero maior que o numero secreto.\n");
        }
        else
        {
            printf("Voce chutou um numero menor que o numero secreto.\n");
        }   
        tentativas++;
    }
    printf("Obrigado(a) por jogar! \n");
    printf("Fim de Jogo!!\n");
    return 0;
}