// 문자 변수와 문자 상수
#include <stdio.h>
int main(void) {
    char code1 = 'A';    //문자 상수로 초기화
    char code2 = 65;    //아스키 코드로 초기화
    char code3 = 'a';

    printf("code1 = %c\n", code1);
    printf("code2 = %c\n", code2);
    printf("a - A = %d\n", code3-code1);

    return 0;
}