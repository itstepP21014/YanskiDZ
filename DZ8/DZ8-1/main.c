#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x=1;
    printf("n = ");
    scanf("%d",&n);
    for (int i=1; i<=n;i++) x*= i;
    printf("Result: %i", x);
    return 0;
}
