#include <stdio.h>

void imprimir(int x);

int main()
{
    int n;
    scanf("%d",&n);
    imprimir(n);
}

void imprimir(int x)
{
    if(x == 0)
        printf("%d\n",x);
    else
    {
        //printf("%d\n",x); ordem decrescente 
        imprimir(x - 1);
        printf("%d\n",x); // ordem crescente
    }
}