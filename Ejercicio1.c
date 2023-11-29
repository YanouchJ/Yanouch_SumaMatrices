#include <stdio.h>

int main(int argc, char const *argv[])
{

    int fA, cA, fB, cB, fC, cC;
    printf("MATRIZ A\n");
    printf("Ingrese el numero de filas: ");
    scanf("%d", &fA);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &cA);
    int MatrizA[fA][cA];

    for (int i = 0; i < fA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            printf("Ingrese los datos de la Matriz A: ");
            scanf("%d", &MatrizA[i][j]);
        }
    }
    
    printf("\nMATRIZ B\n");
    printf("Ingrese el numero de filas: ");
    scanf("%d", &fB);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &cB);
    int MatrizB[fB][cB];

    for (int i = 0; i < fB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            printf("Ingrese los datos de la Matriz B: ");
            scanf("%d", &MatrizB[i][j]);
        }
    }
     //Impresion Matriz A
     printf("Matriz A:\n");
    for (int i = 0; i < fA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            printf("%d\t", MatrizA[i][j]);
        }
        printf("\n\n");
    }

    //Impresion Matriz B
    printf("\nMatriz B:\n");
    for (int i = 0; i < fB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            printf("%d\t", MatrizB[i][j]);
        }
        printf("\n\n");
    }

    int MatrizC[fC][cC];
    for (int i = 0; i < fC; i++)
    {
        for (int j = 0; j < cC; j++)
        {
            MatrizC[fC][cC]=MatrizA[fA][cA]+MatrizB[fB][cB];
            printf("%d\t", MatrizC[i][j]);
        }
        printf("\n\n");
    }


    
    //printf("%d", MatrizB[fB][cB]);
     //printf("%d", MatrizA[fA][cA]);

    

    return 0;
}