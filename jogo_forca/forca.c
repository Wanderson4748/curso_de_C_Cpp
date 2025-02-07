#include <stdio.h>
#include <string.h>

void abertura()
{
    printf("**********************\n");
    printf("*   Jogo de Forca   *\n");
    printf("**********************\n\n");
}

void chuta()
{

    char chute;
    scanf(" %c", &chute);

    chutes[tentativas] = chute;
    tentativas++;
}

int main()
{

    char palavra_secreta[20];

    sprintf(palavra_secreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    abertura();

    do
    {
        for (int i = 0; i < strlen(palavra_secreta); i++)
        {

            int achou = 0;

            for (int j = 0; j < tentativas; j++)
            {
                if (chutes[j] == palavra_secreta[i])
                {
                    printf("---> CHUTE CORRETO!\n");
                    achou = 1;
                    break;
                }
            }

            if (achou)
            {
                printf("%c ", palavra_secreta[i]);
            }

            else
            {
                printf("_ ");
            }
        }

        printf("\n");
        chuta();

    } while (!acertou && !enforcou);
}
//commit