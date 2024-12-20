#include<stdio.h>
#include<stdlib.h>

int main(void)
{   
    int valor1, valor2, soma, sub, mult, div;
    printf("Digite um numero inteiro: ");
    scanf("%d",&valor1);

    printf("Digite outro numero inteiro: ");
    scanf("%d",&valor2);

    soma = valor1 + valor2;
    sub = valor1 - valor2;
    mult = valor1 * valor2;
    div = valor1 / valor2;

    printf("Soma de %d + %d = %d\n", valor1,valor2,soma);
    printf("Soma de %d - %d = %d\n", valor1,valor2,sub);
    printf("Soma de %d * %d = %d\n", valor1,valor2,mult);
    printf("Soma de %d / %d = %d\n", valor1,valor2,div);
    return 0;

}