#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int sum=0;
    scanf("%d",&x);
    while(x!=0)
    {
        sum += x%10;
        x /= 10;
    }
    printf("sum = %d",sum+x);
    return 0;
}
