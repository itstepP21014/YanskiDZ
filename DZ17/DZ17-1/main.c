#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char mas[50], stack[50];
    for (int k=0; k<50; k++)
    {
        stack[k]=0;
    }
    printf("Enter your brackets!\n");
    scanf("%s",&mas);

    for(int i=0; i<strlen(mas); i++)
    {
        switch(mas[i])
        {
            case '[':stack[1]+=1;
            break;
            case '{':stack[2]+=1;
            break;
            case '(':stack[3]+=1;
            break;
            case ']':stack[1]-=1;
            break;
            case '}':stack[2]-=1;
            break;
            case ')':stack[3]-=1;
            break;
        }
    }
    if (stack[1]!=0 || stack[50]==']')
    {
        printf ("Incorrect [ ]");
    }
    if (stack[2]!=0 || stack[50]=='}')
    {
        printf ("Incorrect { }");
    }
    if (stack[3]!=0 || stack[50]==')')
    {
        printf ("Incorrect ( )");
    }
    return 0;
}
