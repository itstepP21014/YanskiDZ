#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numbers, proizvedenie=1, chislo, x;
    printf("Kol-vo cifr: ");
    scanf("%d",&numbers);
    printf("Vvedite %d chifr: \n",numbers);
    for (chislo=numbers; chislo!=0 ;--chislo)
    {
        scanf("%d",&x);
        proizvedenie=proizvedenie*x;
    }
    printf("Proizvedenie = %d",proizvedenie);
    return 0;
}
