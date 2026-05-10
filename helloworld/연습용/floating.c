// 부동 소수점 자료형의 크기 계산 (ㄱ교과서 발췌)
#include <stdio.h>

int main(void)
{
    float x = 1.234567890987654321;
    double y = 1.234567890987654321;

    printf("float의 크기: %d\n", sizeof(float));
    printf("double의 크기: %d\n", sizeof(double));

    printf("x = %30.25f\n", x);    
    //float의 유효숫자는 대략 처음 6자리라고.
    printf("y = %30.25f\n", y);
    //double은 소수점 이하 16자리까진 비교적 정확히. 
    // 오차가 있을 수 있다곤 하지만 float보다 진짜 double이네.

    return 0;

}