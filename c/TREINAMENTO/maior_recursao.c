#include <stdio.h>

int upper_array(int *array, int size, int index)
{
    if(size == 0)
        return array[index];
    else
    {
        if(array[size - 1] > array[index])
            return upper_array(array, size - 1, size - 1);
        else
            return upper_array(array, size - 1, index);
    }
}

int main()
{
    int array[] = {1, 6, 8, 3};
    int upper = upper_array(array, 4, 0);
    printf("maior = %d\n",upper);
}