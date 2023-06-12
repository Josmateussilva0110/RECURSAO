#include <stdio.h>

void print(int x)
{
    if(x == 0)
        printf("%d\n",x);
    else
    {
        print(x - 1);
        printf("%d\n",x);
    }
}

int main()
{
    int x;
    scanf("%d",&x);
    print(x);
}
