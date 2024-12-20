#include<stdio.h>
#include<stdlib.h>

#define LINHAS 3
#define COLUNAS 3

int main(void)
{   
    int matriz[LINHAS][COLUNAS],i, j;
    printf("\nDigite valor para a matriz\n\n");
    for (i=0; i < LINHAS; i++)
    {
        for (j=0; j < COLUNAS; j++)
        {
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n\n-------------Saida de dados-------------\n\n");

    for (i=0; i < LINHAS; i++)
    {
        for (j=0; j < COLUNAS; j++)
        {
            printf("\nElemento[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
    return 0;

}