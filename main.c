#include <stdio.h>

int main()
{
    printf("************************************************************************************************************************\n");
    printf("                                            Bem vindo ao Jogo da Adivinhacao\n");
    printf("************************************************************************************************************************\n");

int numerosecreto;
numerosecreto = 42;

int chute;

printf("Qual eh o seu chute?");
scanf("%d", &chute);
printf("Seu chute foi %d\n", chute);

int acertou = chute == numerosecreto;

    if (acertou){
            printf("Parabens! Voce acertou!\n",acertou);
    printf("Jogue de novo, tu eh fera parceiro\n");
}else{
    int maior = chute > numerosecreto;
if(maior){
    printf("Seu chute foi maior que o numero secreto!\n");
} else {
    printf("Seu chute  foi manor de o numero secreeto\n");
}
}
}
