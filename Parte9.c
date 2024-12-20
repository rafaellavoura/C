#include<stdio.h>
#include<stdlib.h>

int main(void)
{   
    int resto, numero;
    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);

    resto = numero % 2;

    printf("resto da divisao = %d\n",resto);

    if(resto == 0)
    {
        printf("Numero Par\n");
    }
    else
        {
            printf("Numero impar\n");
        }
    return 0;

}