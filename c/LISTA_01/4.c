#include <stdio.h>
#include <stdlib.h>

int sun_array(int *array, int size)
{
    if(size == 1)
        return array[0];
    else
        return array[0] += sun_array(array +1, size - 1);
}

int main()
{
    int size;
    printf("tamanho: ");
    scanf("%d",&size);
    int *array = malloc(size * sizeof(int));
    for(int i = 0; i < size; i++)
    {
        scanf("%d", (array + i));
    }
    int *P_array = array;
    int result = sun_array(P_array, size);
    printf("soma = %d\n",result);
    free(array);
}