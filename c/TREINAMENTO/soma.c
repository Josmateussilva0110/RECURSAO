#include <stdio.h>
#include <stdlib.h>

int sum(int n);

int main()
{
    int value;
    scanf("%d",&value);
    int result = sum(value);
    printf("o somatorio de 1 ah %d eh %d\n",value, result);
}

int sum(int n)
{
    if(n == 0)
        return 0;
    else
    {
        return n += sum(n - 1);
    } 
}