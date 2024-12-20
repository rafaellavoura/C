#include<stdio.h>
#include<stdlib.h>

int main(void)
{   
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite a segunta nota: ");
    scanf("%f",&nota2);

    media = (nota1 + nota2) / 2;

    printf("Media = %.2f", media);
    return 0;

}