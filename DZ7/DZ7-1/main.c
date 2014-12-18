#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int isComasite=0;
    scanf("%d",&number);
    for(int i=2; i<number && !isComasite; ++i)
    {
        isComasite=number%i==0;
    }
    printf(isComasite?"composite":"prime");
    return 0;
}
