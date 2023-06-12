#include <stdio.h>

int reverse(int value, int inverter)
{
    if(value == 0)
        return inverter;
    else
    {
        int end_value = value % 10; // pegar o ultimo digito
        inverter = (inverter * 10) + end_value; // vai montando o valor invertido
        return reverse(value / 10, inverter);
    }
}

int main()
{
    int value;
    scanf("%d",&value);
    int result = reverse(value, 0);
    printf("%d\n",result);
}