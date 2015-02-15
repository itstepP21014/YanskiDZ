#include <stdio.h>
#include <stdlib.h>

int main()
{
    int FewNumbers, number_one=1, number_two=0, result;
    printf("Enter amount of Fibonacci numbers: ");
    scanf("%d", &FewNumbers);
    for(int i=1; i<=FewNumbers; ++i)
    {
        result=number_one+number_two;
        printf("%d ", result);
        number_one=number_two;
        number_two=result;
    }
    return 0;
}
