#include <stdio.h>
#include <stdlib.h>

int main()
{
    char m[]="mother", w[]="wash", f[]="frame";
    printf("%s %s %s\n",m,w,f);
    printf("%s %s %s\n",m,f,w);
    printf("%s %s %s\n",w,m,f);
    printf("%s %s %s\n",w,f,m);
    printf("%s %s %s\n",f,m,w);
    printf("%s %s %s\n",f,w,m);
    return 0;
}
