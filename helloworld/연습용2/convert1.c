// 자료형 변환 예제 프로그램 (교과서 발췌)
#include <stdio.h>
int main (void) {
    char c; int i; float f;

    c = 10000;    //문자형
    i = 1.23456 + 10;    //정수형
    f = 10 + 20;    //부동소수점 어쩌구.. 플로트 상수..

    printf("c = %d, i = %d, f = %f", c, i, f);
    //자료형보다 큰 값을 넣으면 잘려서 출력된다고.
    return 0;
}