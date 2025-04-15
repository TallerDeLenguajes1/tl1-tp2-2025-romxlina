#include<stdio.h>
#include "misFunciones.h"



int main()
{
    Compu computadoras[5];

    CargarCaracteristicasCompu(computadoras,5);

    listarPCs(computadoras,5);

    mostrarMasNueva(computadoras,5);

    mostrarMasVieja(computadoras,5);

    return 0;
}