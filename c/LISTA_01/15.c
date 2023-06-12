#include <stdio.h>

void print_par(int x)
{
    if(x == 0)
        printf("%d\n",x);
    else
    {
        if(x % 2 == 0)
            printf("%d\n",x);
        print_par(x - 1);
    }
}

int main()
{
    int x;
    scanf("%d",&x);
    print_par(x);
}