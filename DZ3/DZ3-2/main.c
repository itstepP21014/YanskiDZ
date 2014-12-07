#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, x;
    printf("Enter number: ");
    scanf("%d",&number);
    for(x=1; x<=number; ++x)
    {
         printf("%d ",x);
    }
    return 0;
}
