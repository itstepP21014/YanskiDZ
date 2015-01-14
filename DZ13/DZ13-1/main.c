#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    while (a%b!=0)
    {
        int c=a%b;
        a=b;
        b=c;
    }
    return b;
}
int lcm (int a, int b)
{
    return a*b/gcd(a,b);
}
int main()
{
    int a,b;
    printf("Enter 2 number \n");
    scanf("%d%d",&a,&b);
    printf("gcd(%d,%d)=%d\n",a,b,gcd(a,b));
    printf("lcm(%d,%d)=%d\n",a,b,lcm(a,b));
    return 0;
}
