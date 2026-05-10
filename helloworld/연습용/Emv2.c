// 질량과 속도를 받아서 운동에너지 계산하기.
#include <stdio.h>
int main(void)
{
    double m, v, E;
    printf("질량 입력하시요(kg): "); scanf("%lf", &m);
    printf("속도도(m/s): "); scanf("%lf", &v);
    E = ((m*v)*(m*v))/2;    //E=mv^2/2.0
    printf("운동에너지(J): %lf", E);

    return 0;
}