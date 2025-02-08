# include <stdio.h>

void calcula(int* calcula) {

    printf("calcula %d\n", (*calcula));
    (*calcula)++;
    printf("Calcula %d\n", (*calcula));

}

int main () {

    int c = 10;

    printf("main %d\n", c);
    calcula(&c);
    printf("main %d\n", c);

}