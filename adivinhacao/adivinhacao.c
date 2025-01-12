#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Imprime o cabeçalho do nosso jogo
    printf("***************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
    printf("******************************\n");

////VARIÁVEIS
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

///////////////////////////////////////////////////
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil, (2) Médio, (3) Dificil \n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    
    switch (nivel) {
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

    if(nivel == 1) {
        numero_de_tentativas = 20;
    }

    else if (nivel == 2) {
        numero_de_tentativas = 15;
    }

    else {
        numero_de_tentativas = 6;
    }

//Receber o chute do usuario e imprimir o numero de tentativas
    for (int i = 1; i <= numero_de_tentativas; i++) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

// Verifica se o chute é negativo
        if (chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            
            continue;
        }
        
        int maior = (chute > numero_secreto);
        int menor = (chute < numero_secreto);

        if(acertou) {
            break;
            }

            else if (maior) {
                printf("Seu chute foi maior que o número secreto!\n");
                printf("Mas não desanime! Tente novamente!\n");
            }
            else if (menor) {
                printf("Seu chute foi menor que o número secreto!\n");
                printf("Mas não desanime! Tente novamente!\n");
            }
            tentativas++;
            double pontosperdidos = abs(chute - numero_secreto) / (double)2;

            pontos = pontos - pontosperdidos;
        }
        
        printf("Fim de jogo!\n");
        
        if(acertou) {
            printf("Você ganhou!\n");
            printf("Você acertou em %d tentativas!\n", tentativas);
            printf("Total de pontos: %.1f\n", pontos);
        }
        else {
            printf("Você perdeu! Tente de novo!\n");
        }
}