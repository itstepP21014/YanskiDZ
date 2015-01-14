#include <stdio.h>
#include <stdlib.h>

double power(int x, int y)
{
    double number=1.0;
    for(int i=1.0; i<=y; ++i)
    {
        number*=x;
    }
    return number;
}
int main()
{
    double x;
    int y;
    printf("Enter number: ");
    scanf("%f",&x);
    printf("Enter power: ");
    scanf("%d",&y);
    printf("power(%f,%d)=%f",x,y,power(x,y));
    return 0;
}
/* not yet */
