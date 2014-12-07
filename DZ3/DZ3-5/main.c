#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,result,p;
    printf("Chislo: ");
    scanf("%d",&x);
    result=x;
    printf("Stepen': ");
    scanf("%d",&p);
    for(int i=1; i<p; ++i)
    {
        x=x*result;
    }
    printf("x^p = %d",x);
    return 0;
}
