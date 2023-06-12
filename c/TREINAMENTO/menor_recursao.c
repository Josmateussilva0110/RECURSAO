#include <stdio.h>

int lower_array(int *array, int size, int index)
{
    if(size == 0)
        return array[index];
    else
    {
        if(array[size - 1] < array[index])
            return lower_array(array, size - 1, size - 1);
        else
            return lower_array(array, size -1, index);
    }
}

int main()
{
    int array[] = {1, 6, 8, 3};
    int lower = lower_array(array, 4, 0);
    printf("menor = %d\n",lower);
}