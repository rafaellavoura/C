#include<stdio.h>
#include<stdlib.h>

int main(void)
{   
    int resto, numero;
    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);

    resto = numero % 2;

    printf("resto da divisao = %d\n",resto);
    return 0;

}