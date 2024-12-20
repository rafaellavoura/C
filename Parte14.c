#include<stdio.h>
#include<stdlib.h>

int main(void)
{   
    float nota1, nota2, media, freq;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite a segunta nota: ");
    scanf("%f",&nota2);

    printf("Digite a Frequencia do aluno: ");
    scanf("%f",&freq);

    media = (nota1 + nota2) / 2;

    printf("Media = %.1f\n", media);

    if(media >=6 && freq >= 75)
    {
        printf("Aluno aprovado\n");
    }
    else
        if(media < 3 || freq < 75)
        {
            printf("Aluno reprovado\n");
        }
        else
            {
                printf("Aluno em recuperacao\n");
            }
            
    return 0;

}