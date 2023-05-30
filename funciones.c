#include <stdio.h>
int calcdet(int matrizA[3][3]) {

    int det;
    
    det = (matrizA[0][0] * matrizA[1][1] * matrizA[2][2]) +
          (matrizA[0][1] * matrizA[1][2] * matrizA[2][0]) +
          (matrizA[0][2] * matrizA[1][0] * matrizA[2][1]) -
          (matrizA[0][2] * matrizA[1][1] * matrizA[2][0]) -
          (matrizA[0][1] * matrizA[1][0] * matrizA[2][2]) -
          (matrizA[0][0] * matrizA[1][2] * matrizA[2][1]);
    
    return det;
}

void calcxyz(int matrizA[3][3], int matrizB[3]) {
    int detmatrizA = calcdet(matrizA);
    
    int detx[3][3] = {
        {matrizB[0], matrizA[0][1], matrizA[0][2]},
        {matrizB[1], matrizA[1][1], matrizA[1][2]},
        {matrizB[2], matrizA[2][1], matrizA[2][2]}
    };
    
    int dety[3][3] = {
        {matrizA[0][0], matrizB[0], matrizA[0][2]},
        {matrizA[1][0], matrizB[1], matrizA[1][2]},
        {matrizA[2][0], matrizB[2], matrizA[2][2]}
    };
    
    int detz[3][3] = {
        {matrizA[0][0], matrizA[0][1], matrizB[0]},
        {matrizA[1][0], matrizA[1][1], matrizB[1]},
        {matrizA[2][0], matrizA[2][1], matrizB[2]}
    };
    
    int valx = calcdet(detx);
    int valy = calcdet(dety);
    int valz = calcdet(detz);
    
    int x = valx / detmatrizA;
    int y = valy / detmatrizA;
    int z = valz / detmatrizA;
    
    printf("Las posiciones son:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
}