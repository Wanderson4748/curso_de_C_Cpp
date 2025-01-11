#include <stdio.h>
int main()
{
    // Imprime o cabeçalho do nosso jogo
    printf("***************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
    printf("******************************\n");

    int numero_secreto = 42;
    int chute;

    //for(int i = 1; i <= 3; i++) {}
    printf("Tentativa %d de 3\n", i);
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);
    
    int acertou = (chute == numero_secreto);
    int maior = (chute > numero_secreto);
    int menor = (chute < numero_secreto);

    if(acertou) {
        printf("Parabéns, Você acertou!\n");
        printf("Você é um bom jogador!, Jogue mais uma vez!\n");
    }
    else {
        printf("Você errou!\n");
        if (maior)
        {
            printf("Seu chute foi maior que o número secreto!\n");
            printf("Mas não desanime! Tente novamente!\n");
        }
        if (menor)
        {
            printf("Seu chute foi menor que o número secreto!\n");
            printf("Mas nãod desanime! Tente novamente!\n");
        }
        
    }
}