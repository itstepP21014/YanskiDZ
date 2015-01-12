#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,res=0;
    char znak;
    printf("yclovie: ");
    scanf("%d%c%d",&x,&znak,&y);
    switch(znak)
    {
        case '+':res=x+y;
        break;
        case '-':  res=x-y;
        break;
        case '*':  res=x*y;
        break;
        case '/':  res=x/y;
        break;
        return 0;
    }
    system("cls");
    printf("%d%c%d=%d\n",x,znak,y,res);
    return 0;
}
