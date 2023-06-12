#include <stdio.h>
#include <stdlib.h>

int expo(int x, int n);

int main()
{
    int value, value2;
    scanf("%d%d",&value, &value2);
    int result = expo(value, value2);
    printf("%d\n",result);
}

int expo(int x, int n)
{
    if(n == 0)
        return 1;
    else
    {
        return x * expo(x, n - 1);
    }
}