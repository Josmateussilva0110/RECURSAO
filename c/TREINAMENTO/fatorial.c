#include <stdio.h>

int fat(int n);

int main()
{
    int n, result;
    scanf("%d",&n);
    result = fat(n);
    printf("%d\n",result);
}

int fat(int n)
{
    if(n == 1 || n == 0)
        return 1;
    else
    {
       return n *  fat(n - 1);
    }
}