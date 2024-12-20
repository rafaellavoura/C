#include<stdio.h>
#include<stdlib.h>

int main(void)
{   
    int valor1, valor2, soma;
    printf("Digite um numero inteiro: ");
    scanf("%d",&valor1);

    printf("Digite outro numero inteiro: ");
    scanf("%d",&valor2);

    soma = valor1 + valor2;

    printf("Soma de %d + %d = %d", valor1,valor2,soma);

    return 0;
}