#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alex[]="Alex", anton[]="Anton", vadim[]="Vadim", roman[]="Roman" ;

    double alexw=3.141, antonw=2.718, vadimw=-0.299, romanw=-0.429;

    printf("%-5s  %.3f\n", alex, alexw);
    printf("%-5s  %.3f\n", anton, antonw);
    printf("%-5s  %.3f\n", vadim, vadimw);
    printf("%-5s  %.3f\n", roman, romanw);
    return 0;
}
