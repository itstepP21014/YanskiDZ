#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height,width;
    scanf("%d",&height);
    scanf("%d",&width);
    for (int i=1; i<=height;++i)
    {
        for(int j=1; j<=width;++j)
        {
           printf("*");
        }
        printf("\n");
    }
    return 0;
}
