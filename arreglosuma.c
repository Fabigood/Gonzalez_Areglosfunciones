#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void crearMatrix(int n, int m, int matrix[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { //esta funcion void es utilizada para crear la matrix con num randoms
            matrix[i][j] = rand() % 100 + 1;
        }
    }
}
void printMatrix(int n, int m, int matrix[n][m]) {
    for (int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; j < m; j++) {
            printf("%d\t", matrix[i][j]);
                }
            }
            printf("\n");
            }
int main()
{
    srand(time(NULL));
    int n, m;
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &n); // se pide al usuario el tamana de la matrix
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &m);

    int Matrix[n][m];
    int Matrix2[n][m];
    int Matrixre[n][m];

    printf("primera matrix");
    crearMatrix(n, m, Matrix);
    printMatrix(n, m, Matrix);

    printf("segunda matriz\n");
    crearMatrix(n, m, Matrix2);
    printMatrix(n, m, Matrix2);

     printf("\nResultado de la suma de las matrices:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {//se crea el for apra sumar las matrices dadas
            Matrixre[i][j] = Matrix[i][j] + Matrix2[i][j];
            printf("%d\t", Matrixre[i][j]);

        }
       }
        return 0;
    }
    