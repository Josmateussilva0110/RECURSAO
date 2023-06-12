#include <stdio.h>

void print(int x)
{
    if(x == 0)
        printf("%d\n",x);
    else
    {
        printf("%d\n",x);
        print(x - 1);
    }
}

int main()
{
    int x;
    scanf("%d",&x);
    print(x);
}
