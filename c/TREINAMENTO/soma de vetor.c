#include <stdio.h>
#include <stdlib.h>

int sum(int *array, int tam);

int main()
{
    int value;
    scanf("%d",&value);
    int array[value];
    for(int i = 0; i < value; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("%d\n", sum(array, value));
}

int sum(int *array, int tam)
{
    if(tam == 0)
        return 0;
    else
    {
        return array[tam-1] += sum(array, tam -1);
    } 
}