// 3.32 x 10^-3 + 9.76 x 10^-8
#include <stdio.h>
int main(void)
{
    double x = 3.32 * 10e3;
    double y = 9.76 * 10e8;
    printf("3.32 x 10^-3 + 9.76 x 10^-8 = %lf", x+y);

    return 0;
}