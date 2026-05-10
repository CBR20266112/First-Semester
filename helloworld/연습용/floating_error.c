// 부동소수점 사용시 주의할 점?? (교과서 발췌)
#include <stdio.h>

int main(void)
{
    double x;

    x = (1.0e20 + 5.0)-1.0e20;    //부동소수점 연산 오차 발생.
    printf("%f \n", x);    //5.0이 아니라 0으로 계산된대.

    return 0;
}