#include <stdio.h>
#include "funciones.h"

int main(int argc, char *argv[])
{
    int matrizA[3][3];
    int matrizB[3];

    printf("Ingrese los elementos de la matriz A(3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Ingrese los elementos de la matriz B(3x1):\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &matrizB[i]);
    }

    int determinante = calcdet(matrizA);

    printf("La determinante de la matriz es: %d\n", determinante);

    calcxyz(matrizA, matrizB);

    return 0;
}