/* #include <stdio.h>

int main() {
    int a = 12;
    int b = 5;
    double pontos = (double)a/(double)b;
    printf("%f\n", pontos);

    double pi = 3.1415;
    int pi_convertido = (int)pi;

    printf("%f %d\n", pi, pi_convertido);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = abs(3);
    int b = abs(-3);
    int soma_ab = a + b;

    int c = abs(a * b);

    printf("soma %d\n", soma_ab);
    printf("multiplicaçäo %d", c);
}
*/
#include <stdio.h>
#include <stdlib.h>
int main() {

    int segundos = time(0);
    srand(segundos);

    int n1 = rand();
    int n2 = rand();

    printf("%d %d\n", n1, n2);
}
