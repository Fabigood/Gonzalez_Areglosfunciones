#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void crearMatrix(int n, int m, int matrix[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { //esta funcion void es utilizada para crear la matrix con num randoms
            matrix[i][j] = rand() % 100 + 1;//generador de valor 1 a 100
        }
    }
}
void printMatrix(int n, int m, int matrix[n][m]) {
    for (int i = 0; i < n; i++) {
        printf("\n"); //void crear solo para imprimir 
        for (int j = 0; j < m; j++) {
            printf("%d\t", matrix[i][j]);
                }
            }
            printf("\n");
            }
int main()
{
    srand(time(NULL));//comadno de num random explicado en clase
    int n, m;
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &n); // se pide al usuario el tamana de la matrix
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &m);

    int Matrix[n][m];
    int Matrix2[n][m];
    int Matrixre[n][m];

    printf("primera matrix");
    crearMatrix(n, m, Matrix); //se llama a las funciones
    printMatrix(n, m, Matrix);

    printf("segunda matriz\n");
    crearMatrix(n, m, Matrix2);
    printMatrix(n, m, Matrix2); //llamar funcione

     printf("\nResultado de la suma de las matrices:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {//se crea el for paraa sumar las matrices dadas
            Matrixre[i][j] = Matrix[i][j] + Matrix2[i][j];//suma de matrices
            printf("%d\t", Matrixre[i][j]);

        }
       }
        return 0;
    }
    