#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    double x, res, number, eps=1e-4;
    int i;
    printf("x \t\t my number \t exp \t\t diff\n");
    for(x=-2.0;x<=2.1;x+=0.1)
    {
        res=0, number=1, i=0;
        while(fabs(number)>eps)
        {
                res+=number;
                number *=x/++i;
        }
        printf("%f \t %f \t %f \t %f\n",x , res, exp(x), res-exp(x));
    }
    return 0;
}
