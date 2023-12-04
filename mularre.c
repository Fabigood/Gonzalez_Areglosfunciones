#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void crearMatrix(int n, int m, int matrix[n][m], int valor) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = valor;
                        }
           }
}

// Función para imprimir una matriz
void printMatrix(int n, int m, int matrix[n][m]) {
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    int o, n, m;
    printf("Ingrese el numero de matrices \n");
    scanf("%d", &o);
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &n); // se pide al usuario el tamana de la matrix
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &m);
    int Matrix[n][m];


    for (int i = 0; i < o-1; i++) {
        printf("\nMatriz %d:\n", i+1);
        crearMatrix(n, m, Matrix, 0);// Crear e imprimir las primeras matrixs con  0
        printMatrix(n, m, Matrix);
        }


 // Crear e imprimir la última matriz con valor 1
    printf("\nMatriz %d:\n", o);
    crearMatrix(n, m, Matrix, 1);
    printMatrix(n, m, Matrix);
    return 0;
}



