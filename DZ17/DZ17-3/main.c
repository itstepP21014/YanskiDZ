#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 10000

int main()
{
    char mas[]="++++++++++++++++++++++++++++++++++++.>+++++++++++++++++.>+++++++++++++++++++++++++++.;";
    char arr[N];
    for(int i=0;i<N;i++)
    {
        arr[i]=0;
    }
    int k=0;
    for(int i=0;i<strlen(mas);i++)
    {
        switch(mas[i])
        {
        case '!':arr[k]=' ';
        break;
        case '>':k++;
        break;
        case '<':k--;
        break;
        case '+':arr[k]++;
        break;
        case '-':arr[k]--;
        break;
        case '.':printf("%c",arr[k]);
        break;
        case ';':exit(1);
        }

    }
    return 0;
}
