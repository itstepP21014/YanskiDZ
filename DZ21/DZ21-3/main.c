#include <stdio.h>
#include <stdlib.h>
#include "../../Modules/include/myString.h"

int main ()
{
    char *str1="Sample string";
    char str2[40];
    myStrcpy(str2,str1);
    printf ("str1: %s\nstr2: %s\n",str1,str2);
    return 0;
}
