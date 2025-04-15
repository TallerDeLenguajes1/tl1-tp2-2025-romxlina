#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main()
{
    srand(time(NULL));
    int i;
    double vt[N];

    // aritmética de punteros para asignar valores
    for(i = 0; i < N; i++) {
        *(vt + i) = 1 + rand() % 100;
    }

    // aritmética de punteros para imprimir valores
    for(i = 0; i < N; i++) {
        printf("%f ", *(vt + i));
    }

    return 0;
}
