// 머리가 터질 것 같아요. 물론 안 터지겠지만
#include <stdio.h>

int main(void)
{
    float x = 1.23456e-38;
    float y = 1.23456e-40;
    float z = 1.23456e-46;   //언더플로우????
    //e-38까진 괜찮은데 점점 부정확해지고 종래에는 0까지.
    printf("x = %e\n", x);
    printf("y = %e\n", y);
    printf("z = %d\n", z);

    float value = 0.1;    //부동소수점은 부정확할 수 있대.
    printf("%.20f\n", value);    //%.20f는 소수점 20자리 출력
    //이진법에서는 아무리 노력해도 0.1을 정확히 표현할 수 없대.
    return 0;
}