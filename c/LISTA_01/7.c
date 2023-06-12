#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reverse(int *array, int first, int end)
{
    if(first >= end)
        return;
    else
    {
        int aux = array[first];
        array[first] = array[end];
        array[end] = aux;
        reverse(array, first + 1, end - 1);
    }
}

int main()
{
    srand(time(NULL));
    int *array = NULL, tam = 0;
    while(tam < 10)
    {
        tam++;
        array = (int*) realloc(array, tam * sizeof(int));
        array[tam-1] = rand() % 100;
    }
    int *P_array = array;
    printf("valores antes:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n",*P_array);
        P_array++;
    }
    P_array = array;
    reverse(P_array, 0, 9);
    printf("valores depois:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n",*P_array);
        P_array++;
    }
    free(array);
}