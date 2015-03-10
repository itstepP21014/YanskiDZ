#include <stdio.h>
#include <stdlib.h>
#include "../../modules/include/myString.h"

int main ()
{
    char a[100], b[100];
    printf("Enter string: ");
    scanf("%s",a);
    printf("Enter one more string: ");
    scanf("%s",b);
    if(myStrcmp(a, b)==0)
    {
        return printf("Correct!\n");
    }
    else
    {
        return printf("Strings are not same!\n");
    }
    return 0;
}
