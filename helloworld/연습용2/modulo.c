// 나머지 연산자 프로그람 (교과서 발췌)
#include <stdio.h>
#define SEC_PER_MINUTE 60    //#define문으로 기호상수 정의

int main(void)
{
    int input, minute, second;

    printf("몇촌디"); scanf("%d", &input);
    minute = input / SEC_PER_MINUTE;    //나누기
    second = input % SEC_PER_MINUTE;    //나머지

    printf("%d초는 %d분 %d초지.", input, minute, second);

    return 0;
}