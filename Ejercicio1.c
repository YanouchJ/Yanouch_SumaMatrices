#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int fA, cA, fB, cB, fC, cC;
    // Dimension de la matriz A
    printf("MATRIZ A\n");
    printf("Ingrese el numero de filas: ");
    scanf("%d", &fA);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &cA);
    int MatrizA[fA][cA];

    // Valores para la matriz A
    for (int i = 0; i < fA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            MatrizA[i][j] = rand() % 101;
        }
    }
    // Dimension de la matriz B
    printf("\nMATRIZ B\n");
    printf("Ingrese el numero de filas: ");
    scanf("%d", &fB);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &cB);
    int MatrizB[fB][cB];

    // Valores para la matriz B
    for (int i = 0; i < fB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            MatrizB[i][j] = rand() % 101;
        }
    }
    // Impresion Matriz A
    printf("\nMatriz A:\n");
    for (int i = 0; i < fA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            printf("%4d\t|", MatrizA[i][j]);
        }
        printf("\n");
    }

    // Impresion Matriz B
    printf("\nMatriz B:\n");
    for (int i = 0; i < fB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            printf("%4d\t|", MatrizB[i][j]);
        }
        printf("\n");
    }

    // Suma de las matrices
    fC=fA, cC=cA;
    int MatrizC[fC][cC];
    for (int i = 0; i < fC; i++)
    {
        for (int j = 0; j < cC; j++)
        {
            MatrizC[i][j] = (MatrizA[i][j]) + (MatrizB[i][j]);
        }
        printf("\n");
    }
    // Impresion Suma de matrices
    printf("\nSUMA\nMatriz C:\n");
    for (int i = 0; i < fC; i++)
    {
        for (int j = 0; j < cC; j++)
        {
            printf("%4d\t|", MatrizC[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}