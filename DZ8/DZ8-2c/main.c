#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    double x, res, number, eps=1e-4;
    int i;
    printf("x \t\t my number \t cos(x) \t\t diff\n");
    for(x=-2.0;x<=2.1;x+=0.1)
    {
        i=1,res=0, number=1;
        while(fabs(number)>eps)
        {
                res+=number;
                number *=(-1)*x*x/(2*i)/(2*i-1);
                ++i;
        }
        printf("%f \t %f \t %f \t %f\n",x , res, cos(x), res-cos(x));
    }
    return 0;
}
