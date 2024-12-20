#include<stdio.h>
#include<stdlib.h>

int main(void)
{   
    int numero = 10;
    float numero2 = 6.5;
    char letra = 'a';

    printf("numero inteiro %d\n", numero);
    printf("numero real %f\n", numero2);
    printf("Letra %c\n", letra);

    printf(" %d %f %c", numero, numero2, letra);

    return 0;
}