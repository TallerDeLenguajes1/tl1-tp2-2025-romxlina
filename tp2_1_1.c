#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

// codigo a completar
int main()
{

    srand(time(NULL));
    int i;
    double vt[N];

    for(i = 0; i<N; i++)
    {
    vt[i]= 1+ rand() %100; 
    }
    
    for (i = 0; i < N; i++) {
        printf("%f ", vt[i]);
    }
    
    return 0;
}



