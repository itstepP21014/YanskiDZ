#include <stdio.h>
#include <stdlib.h>
#include "../../modules/include/myString.h"

int main()
{
    char temp[256];
    printf("Please enter a sentence: ");
    gets(temp);
    printf("The sentence entered is %u characters long.\n",myStrlen(temp));
    return 0;
}
