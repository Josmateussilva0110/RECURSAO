#include <stdio.h>

void print_par(int x)
{
    if(x == 0)
        printf("%d\n",x);
    else
    {
        print_par(x -1);
        if(x % 2 == 0)
        {
            printf("%d\n",x);
        }
    }
}

int main()
{
    int x;
    scanf("%d",&x);
    print_par(x);

    return 0;
}
