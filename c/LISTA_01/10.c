#include <stdio.h>

int event(int value, int k)
{
    if(value == 0)
        return 0;
    int end_value = value % 10;
    if(end_value == k)
        return 1 + event(value / 10, k);
    else
        return event(value / 10, k);

}

int main()
{
    int x, y;
    scanf("%d%d",&x,&y);
    int result = event(x, y);
    printf("%d\n",result);
}
