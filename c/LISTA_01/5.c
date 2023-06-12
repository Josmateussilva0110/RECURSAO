#include <stdio.h>
#include <stdlib.h>

int sum(int value)
{
    if(value == 0)
        return value;
    else
    {
        return value + sum(value - 1);
    }
}

int main()
{
    int size;
    scanf("%d",&size);
    int result = sum(size);
    printf("%d\n",result);
}