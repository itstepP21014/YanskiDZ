#include <stdio.h>
#include <stdlib.h>
#include "../../Modules/include/gcdANDlcm.h"
int main()
{
    int a,b;
    printf("Enter 2 numbers: \n");
    scanf("%d%d",&a,&b);
    printf("gcd(%d,%d) = %d\n",a,b,gcd(a,b));
    printf("lcm(%d,%d) = %d",a,b,lcm(a,b));
    return 0;
}
