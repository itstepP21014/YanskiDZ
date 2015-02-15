#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, power, result=1;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("Enter power: ");
    scanf("%d", &power);
    if(power>0)
    {
        for(int i=0; i<power; ++i)
        {
            result*=number;
        }
        printf("Result: %d", result);
    }
    if (power<0)
    {
        power*=-1;
        for(int i=0; i<power; ++i)
        {
            result*=number;
        }
        printf("Result: %.6f", 1.0/result);
    }
    if (power==0)
    {
        printf("Result: 1");
    }
    return 0;
}
