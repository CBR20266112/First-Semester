// NOT 연산자를 이용해 마이너스 출력하기인 듯. (교과서 발췌)
#include <stdio.h>
int main(void) {
    int a = 32;
    a = ~a;    //일단 비트 반전하는 듯, NOT 연산자를 이용해서.
    a = a + 0x01;    //16진수 기준 1 더하기인가?
    printf("a = %d\n", a);

    return 0;
}