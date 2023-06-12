#include <stdio.h>

int mdc(int x, int y)
{
    if(y == 0)
        return x;
    else
    {
        return mdc(y, x % y);
    }
}

int main()
{
    int x, y;
    scanf("%d%d",&x,&y);
    int result = mdc(x, y);
    printf("%d\n",result);

    return 0;
}
