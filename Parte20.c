#include<stdio.h>
#include<stdlib.h>

int main(void)
{   
    struct fichaAluno
    {
        int matricula;
        float nota1;
        float nota2;
    };

    struct fichaAluno aluno;

    printf("Numero de matricula  ");
    scanf("%d", &aluno.matricula);

    printf("Primeira Nota  ");
    scanf("%f", &aluno.nota1);

    printf("Segunda Nota  ");
    scanf("%f", &aluno.nota2);

    printf("\n\n ------------Dados da Struct--------\n\n");
    printf("Matricula......: %d\n", aluno.matricula);
    printf("Primeira Nota.....: %.2f\n", aluno.nota1);
    printf("Segunda Nota.....: %.2f\n", aluno.nota2);


    return 0;

}