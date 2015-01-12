#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height,width;
    double x;
    printf("Enter height:");
    scanf("%d",&height);
    printf("Enter width:");
    scanf("%d",&width);
    for (int i=1; i<=height;++i)
    {
        for(int j=1; j<=width;++j)
        {
            if(i%2!=0){
                if(j%2==0)
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
                if(j%2!=0)
                    printf("*");
                else
                    printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
