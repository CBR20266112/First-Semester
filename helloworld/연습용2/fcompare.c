// 실수 비교 (교과서 발췌)
#include <stdio.h>
#include <math.h>    //절댓값을 구하는 함수 fabs를 사용하려면 이 헤더 파일을.

int main(void)
{
    double a, b;
    a = (0.3 * 3) + 0.1;
    b = 1;
    printf("a==b의 결과: %d\n", a==b);
    printf("fabs(a-b)<0.0001의 결과: %d", fabs(a-b)<1e-9);

    return 0;
}