#include <stdio.h>
int main()
{
    // Imprime o cabeçalho do nosso jogo
    printf("***************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
    printf("******************************\n");

    int numero_secreto = 42;
    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    if (chute == numero_secreto)
    {
        printf("Parabéns, Você acertou!\n");
    }
    else
    {
        printf("Você errou!\n");
        if (chute > numero_secreto)
        {
            printf("Seu chute foi maior que o número secreto!\n");
        }
        if (chute < numero_secreto)
        {
            printf("Seu chute foi menor que o número secreto!\n");
        }
        printf("Mas não desanime! Tente novamente!\n");
    }
}