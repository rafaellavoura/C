#include<stdio.h>
#include<stdlib.h>

int main(void)
{   
    int cont, resp;


    do
    {
        printf("digite um valor\n");
        scanf("%d",&resp);
    }
    while(resp > 0);
    system("pause");
    return 0;

}