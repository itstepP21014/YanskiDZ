#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,gcd;
    printf("Enter 2 numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(b==0)
    {
        gcd=a;
    }
    while(a%b!=0)
    {
        int c=a%b;
        a=b;
        b=c;
    }
    gcd=b;
    printf("HOD = %d",gcd);
    return 0;
}
