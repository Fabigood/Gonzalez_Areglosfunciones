#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void crearMatrix(int n, int m, int matrix[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand() % 100 + 1;
        }
    }
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
    

    printf("primera matrix");
    for (int i = 0; i < n; i++)
    {           //for para imprimir la matrix  
        
        printf("\n");

        for (int j = 0; j < m; j++)
        {
            Matrix[i][j] = rand() % 100 + 1;        //agregamos para tener numeros randoms

            printf("%d\t", Matrix[i][j]);
        }
        
    }
        printf("\n");
       printf("segunda matrix");   
        printf("\n");
         srand(time(NULL));
     
    int Matrix2[n][m];

    for (int i = 0; i < n; i++)
    {           //for para imprimir la matrix  
        printf("\n");

        for (int j = 0; j < m; j++)
        {
            Matrix2[i][j] = rand() % 100 + 1;        //agregamos para tener numeros randoms

            printf("%d\t", Matrix2[i][j]);
        }
     }
    int matrixre[n][m];
     printf("\nResultado de la suma de las matrices:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {//se crea el for apra sumar las matrices dadas
            matrixre[i][j] = Matrix[i][j] + Matrix2[i][j];
            printf("%d\t", matrixre[i][j]);

        }
       }
        return 0;
    }
    