#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, number=2;
    printf("Enter number > or = 2:");
    scanf("%d",&x);
    while(x!=0)
    {
        if(x%number == 0)
        {
            printf("%d",number);
            x=x/number;
        }
        else
        {
            ++number;
        }
    }
    return 0;
}
