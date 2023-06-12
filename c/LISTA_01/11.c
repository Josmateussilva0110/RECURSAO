#include <stdio.h>

int mult(int x, int y)
{
    if(y == 0)
        return 1;
    if(y == 1)
        return x;
    else
        return x + mult(x, y-1);

}

int main()
{
    int x, y;
    scanf("%d%d",&x,&y);
    int result = mult(x, y);
    printf("%d\n",result);
}
