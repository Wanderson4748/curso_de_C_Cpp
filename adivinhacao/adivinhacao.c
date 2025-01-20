#include <stdio.h>
// Standard Input/Output

#include <stdlib.h>
// Standard Library. Oferece funções para manipulação de memória, conversões e controle de programas.

#include <time.h>
// Time Library

int main()
{
    // Imprime o cabeçalho do nosso jogo
    printf("***************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
    printf("******************************\n");

    ////VARIÁVEIS PRINCIPAIS/////

    int segundos = time(0);
    srand(segundos);

    int numero_grande = rand();

    int numero_secreto = numero_grande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;

    int numero_de_tentativas;

    // PERGUNTAR QUAL A DIFICULDADE DO JOGO

    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil, (2) Médio, (3) Dificil \n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    // Verificar o nível e atribui a variavel "numero_de_tentativas"

    switch (nivel)
    {
    case 1:
        numero_de_tentativas = 20;
        break;

    case 2:
        numero_de_tentativas = 15;
        break;

    default:
        numero_de_tentativas = 6;
        break;
    }

    // A estrutura de repetição responsável por rodar o jogo em cada tentativa
    for (int i = 1; i <= numero_de_tentativas; i++)
    {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        // Verifica se o chute é negativo
        if (chute < 0)
        {
            printf("Você não pode chutar números negativos!\n");

            continue; // Reinicia o for sem contabilizar tentativa
        }

        // Variaveis com valor do chute maior e menor que o numero secreto
        int maior = (chute > numero_secreto);
        int menor = (chute < numero_secreto);

        if (acertou)
        {
            break;
        }

        else if (maior)
        {
            printf("Seu chute foi maior que o número secreto!\n");
        }

        else if (menor)
        {
            printf("Seu chute foi menor que o número secreto!\n");
        }

        tentativas++; // adiciona uma tentativa a variavel numero_tentativas

        double pontosperdidos = abs(chute - numero_secreto) / (double)2; // Calculo do pontos perdidos

        pontos = pontos - pontosperdidos; // Total de pontos
    }

    printf("Fim de jogo!\n"); // Mensagem de fim de jogo

    if (acertou)
    {
        printf("Você ganhou!\n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    }
    else
    {
        printf("Você perdeu! Tente de novo!\n");
    }
}