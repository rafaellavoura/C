#include<stdio.h>
#include<stdlib.h>

int main(void)
{   
    int cont;

    for(cont = 1; cont <= 100; cont = cont + 1) // da pra colocar ++, porem fica infinito
    {
        printf("%d - Boa Tarde\n", cont);

        
    }
    return 0;
}