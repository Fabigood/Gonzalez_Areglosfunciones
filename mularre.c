#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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



  printf("\n");
    printf("\n Matrix");
    for (int i = 0; i < o-1; i++)
    {
        for (int i = 0; i < n; i++)
        { // numero de matrices que se van a imprimir y le n de columnas y filas se aplica el -1 para que no se imprima una extra y tener 1 menos de la funal
            printf("\n");
            for (int j = 0; j < m; j++)
            {
                Matrix[i][j] = 0;
                printf("%d\t", Matrix[i][j]);
            }
        }
        printf("\n Matrix:");
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {//for creado para que la mtrix impirma solo 1
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            Matrix[i][j] = 1;
            printf("%d\t", Matrix[i][j]);

        }
            
        }
        return 0;
    }
    

