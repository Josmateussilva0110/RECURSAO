#include <stdio.h>

void swap(int *array, int first, int end)
{
    int aux;
    if(first < end)
    {
        aux = array[first];
        array[first] = array[end];
        array[end] = aux;
        swap(array, first + 1, end - 1);
    }
}


void print_array(int *array, int size)
{
    if(size == 1)
        printf("%d\n",array[size -1]);
    else
    {
        print_array(array, size - 1);
        printf("%d\n",array[size -1]);
    }
        
}

int main()
{
    int array[] = {1, 6, 8, 3};
    print_array(array, 4);
    printf("\ndepois da troca:\n");
    swap(array, 0, 3);
    print_array(array, 4);
}