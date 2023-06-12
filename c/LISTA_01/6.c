#include <stdio.h>
#include <stdlib.h>

int expo(int x, int y)
{
    if(y == 0)
        return 1;
    if(y == 1)
        return x;
    else
        return x * expo(x, y -1);
}

int main()
{
   int k, n;
   scanf("%d%d",&k, &n);
   int result = expo(k, n);
   printf("%d\n",result);
}