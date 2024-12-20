#include<stdio.h>
#include<stdlib.h>

int main(void)
{   
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);

    numero > 0 ? printf("Positivo\n") : printf("Negativo\n");
    return 0;

}