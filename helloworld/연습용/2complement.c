// 2의 보수 프로그람 (교과서 발췌)
#include <stdio.h>

int main(void)
{
    int x = 3;    //16진수 3도 결국 3이지
    int y = -3;    //근데 이건 음수니까 2의 보수로?
    printf("x = %08X\n", x);    //%08X는 8자리16진수
    printf("y = %08X\n", y);    //대문자X는 대문자출력
    printf("x+y = %08X\n", x+y);    //앞에0은 출력하라고.

    return 0;
}