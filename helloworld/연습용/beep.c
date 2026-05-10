// 제어 문자 - 경고음 (교과서 발췌)
#include <stdio.h>
int main(void) {

    char beep = 7;
    printf("%c", beep);
    //실행 환경상 경고음 출력은 안 되는 것으로 추정
    char beeep = '\a';
    printf("%c", beeep);
}