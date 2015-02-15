#include <stdio.h>
#include <stdlib.h>

int main()
{
    int FewNumbers, number, min=1, max=1;
    printf("Enter numbers: ");
    scanf("%d", &FewNumbers);
    printf("Enter %d numbers: ", FewNumbers);
    for(int i=1; i<=FewNumbers; ++i)
    {
        scanf("%d", &number);
        if(number>=max)
        {
            max=number;
        }
        else if(number<=min)
        {
            min=number;
        }
    }
    printf("Max = %d\nMin = %d\n", max, min);
    return 0;
}
