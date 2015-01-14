#include <stdio.h>
#include <stdlib.h>


int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        while(a%b!=0)
        {
            int c=a%b;
            a=b;
            b=c;
        }
        return b;
    }
}
int main()
{
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);
    for(int j=1; j<=n; ++j)
    {
        for(int i=1; i<=n; ++i)
        {
            if(gcd(i,j)==1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

