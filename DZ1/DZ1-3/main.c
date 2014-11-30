#include <stdio.h>
#include <stdlib.h>

double main()
{
    double r,h;
    printf("R = ");
    scanf("%lf",&r);
    printf("H = ");
    scanf("%lf",&h);
    printf("%.2f\n",(3.1415926535*pow(r,2)*h)/3);
    printf("%.2f", 3.1415926535*r*(r+sqrt(pow(r,2)+pow(h,2))));
    return 0;
}
