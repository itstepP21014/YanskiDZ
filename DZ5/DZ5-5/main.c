#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height,width;
    scanf("%d",&height);
    scanf("%d",&width);
    for (int j=1; j<=width; ++j)
        {
        printf("#");
        }
    printf("\n");
    for (int i=1; i<=height-2;++i)
        {
        printf("#");
        for(int j=1; j<=width-2;++j)
            {
            printf(" ");
            }
        printf("#");
        printf("\n");
        }
    for(int j=1; j<=width;++j)
        {
        printf("#");
        }
    printf("\n");
    return 0;
}
