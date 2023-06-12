#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main()
{
    int value;
    scanf("%d",&value);
    int result = fibonacci(value);
    printf("%d\n",result);
}

int fibonacci(int n)
{
    if(n == 1)
        return 0;
    else
    {
        if(n == 2)
            return 1;
        else
        {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
}