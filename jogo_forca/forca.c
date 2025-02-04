#include <stdio.h>
#include <string.h>

int main()
{

    char palavra_secreta[20];

    sprintf(palavra_secreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    do
    {
        for (int i = 0; i < strlen(palavra_secreta); i++)
        {

            int achou = 0;

            printf("Estou vendo a letra secreta %d = %c\n", i, palavra_secreta[i]);

            for (int j = 0; j < tentativas; j++)
            {
                printf("-> Chute %d = %c\n", j, chutes[j]);
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

        char chute;
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;

    } while (!acertou && !enforcou);
}