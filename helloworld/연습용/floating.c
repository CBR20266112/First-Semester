// 부동 소수점 자료형의 크기 계산 (ㄱ교과서 발췌)
#include <stdio.h>

int main(void)
{
    float x = 1.234567890987654321;
    double y = 1.234567890987654321;

    printf("float의 크기: %d\n", x);
    printf("double의 크기: %d\n", y);

    printf("x = %30.25f\n", x);
    printf("y = %30.25f\n", y);

    return 0;

}